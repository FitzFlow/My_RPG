/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** movement3
*/

#include "rpg.h"

bool check_resize_right(sfVector2f pos, sfImage *filter,
int *change_draw, int i)
{
    int offset = 0;
    sfColor color;

    while (offset != 5) {
        color = GET_PIXEL(filter, pos.x + 22 + offset, pos.y + 40 + i);
        if (color.r == 0 && color.g == 0 && color.b == 0) {
            *change_draw = 0;
            return true;
        }
        offset++;
    }
    return false;
}

bool check_resize_left(sfVector2f pos, sfImage *filter,
int *change_draw, int i)
{
    int offset = 0;
    sfColor color;

    while (offset != -5) {
        color = GET_PIXEL(filter, pos.x + 8 + offset, pos.y + 40 + i);
        if (color.r == 0 && color.g == 0 && color.b == 0) {
            *change_draw = 0;
            return true;
        }
        offset--;
    }
    return false;
}

bool check_resize_up(sfVector2f pos, sfImage *filter, int *change_draw, int i)
{
    int offset = 0;
    sfColor color;

    while (offset != -30) {
        color = GET_PIXEL(filter, pos.x + i, pos.y + 39 + offset);
        if (color.r == 0 && color.g == 0 && color.b == 0) {
            *change_draw = 1;
            return true;
        }
        *change_draw = 0;
        offset--;
    }
    return false;
}

bool check_resize_down(sfVector2f pos, sfImage *filter,
int *change_draw, int i)
{
    int offset = 0;
    sfColor color;

    while (offset != 5) {
        color = GET_PIXEL(filter, pos.x + i, pos.y + 49 + offset);
        if (color.r == 0 && color.g == 0 && color.b == 0) {
            *change_draw = 0;
            return true;
        }
        offset++;
    }
    return false;
}
