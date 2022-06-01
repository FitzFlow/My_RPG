/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** animation_camera
*/
#include "rpg.h"

int animation_camera(int dist, sfView *view, sfVector2f end, sfVector2f sens)
{
    sfVector2f pos = sfView_getCenter(view);

    pos.x = pos.x - 100;
    pos.y = pos.y - 100;
    if (dist_btw_point(pos, end) > dist) {
        sfView_move(view, sens);
        return 1;
    }
    return 0;
}
