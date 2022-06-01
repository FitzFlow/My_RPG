/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** collision
*/

#include "rpg.h"

bool is_the_color(sfColor color)
{
    if (color.r == 0 && color.g == 0 && color.b == 0)
        return true;
    return false;
}

bool check_x(sfVector2f pos, sfVector2f sens, sfImage *filter,
int *change_draw)
{
    sfColor color;
    bool value = false;
    int size = 29;

    if (sens.x == -1)
        pos.x = pos.x + size;
    for (int y = 25; y < 48 - 10 && !value; y++)
        for (int x = 10; x < size + 4 && !value; x++) {
            color = GET_PIXEL(filter, pos.x + x * sens.x, pos.y + y);
            value = is_the_color(color);
            *change_draw = 0;
        }
    return value;
}

bool check_y(sfVector2f pos, sfVector2f sens, sfImage *filter,
int *change_draw)
{
    sfColor color;
    bool value = false;
    int size = 48;

    if (sens.y == -1)
        pos.y = pos.y + size;
    for (int x = 10; x < 19 && !value; x++)
        for (int y = 40; y < size + 4 && !value; y++) {
            color = GET_PIXEL(filter, pos.x + x, pos.y + y * sens.y);
            value = is_the_color(color);
            *change_draw = 0;
        }
    return value;
}

bool check_up(sfVector2f pos, sfImage *filter, int *change_draw)
{
    sfColor color;
    bool value = false;
    int size = 48;

    for (int x = 5; x < 19 && !value; x++)
        for (int y = 20; y < size && !value; y++) {
            color = GET_PIXEL(filter, pos.x + x, pos.y + y);
            value = is_the_color(color);
            *change_draw = 0;
        }
    for (int y = 5; y <= 30; y++) {
        color = GET_PIXEL(filter, pos.x, pos.y + y);
        if (is_the_color(color))
            *change_draw = 1;
    }
    return value;
}

bool check_colision(sfVector2f pos, sfImage *filter, int *change_d)
{
    if (check_x(pos, V2F(1, 0), filter, change_d) &&
    check_x(pos, V2F(-1, 0), filter, change_d) &&
    check_y(pos, V2F(0, 1), filter, change_d) &&
    check_y(pos, V2F(0, -1), filter, change_d))
        return false;
    return true;
}
