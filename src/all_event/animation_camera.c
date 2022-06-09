/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** animation_camera
*/
#include "rpg.h"

int animation_camera(sfView *view, sfVector2f dest, int speed)
{
    sfVector2f pos = sfView_getCenter(view);
    sfVector2f sens = {(pos.x - dest.x) / speed, (pos.y - dest.y) / speed};
    sens.x *= -1;
    sens.y *= -1;
    if (dist_btw_point(pos, dest) >= 50) {
        sfView_move(view, sens);
        return 1;
    }
    return 0;
}
