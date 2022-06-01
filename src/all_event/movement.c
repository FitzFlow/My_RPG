/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** movement
*/

#include "rpg.h"

bool check_collision_right(sfVector2f pos, sfImage *filter, int *change_draw)
{
    if (!filter)
        return false;
    for (int i = 0; 40 + i <= 48; i++) {
        if (check_resize_right(pos, filter, change_draw, i) == true)
            return true;
    }
    return false;
}

bool check_collision_left(sfVector2f pos, sfImage *filter, int *change_draw)
{
    if (!filter)
        return false;
    for (int i = 0; i <= 8; i++) {
        if (check_resize_left(pos, filter, change_draw, i) == true)
            return true;
    }
    return false;
}

bool check_collision_up(sfVector2f pos, sfImage *filter, int *change_draw)
{
    if (!filter)
        return false;
    for (int i = 9; i < 22; i++) {
        if (check_resize_up(pos, filter, change_draw, i) == true)
            return true;
    }
    return false;
}

bool check_collision_down(sfVector2f pos, sfImage *filter, int *change_draw)
{
    if (!filter)
        return false;
    for (int i = 9; i < 22; i++) {
        if (check_resize_down(pos, filter, change_draw, i) == true)
            return true;
    }
    return false;
}

void movement(all_t *all)
{
    if (all->state_of_game != game || FIGHT->fight1 == in_fight ||
    MISSION1 == animation_mission)
        return;
    anim_guy(all);
    if (all->interior_enum == in_city)
        game_collision(all, FILTER);
    if (all->interior_enum == player_house)
        game_collision(all, all->filter->filter_player_house);
    if (all->interior_enum == other_house)
        game_collision(all, all->filter->filter_other_house);
}
