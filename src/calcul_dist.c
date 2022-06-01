/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myradar-idriss.said
** File description:
** dist_btw_point
*/
#include <SFML/Graphics.h>
#include <math.h>
#include "pnj.h"

int dist_btw_sprite(sfSprite *e1, sfSprite *e2)
{
    sfVector2f p1 = {0, 0};
    sfVector2f p2 = {0, 0};

    if (!e1 || !e2)
        return -1;
    p1 = sfSprite_getPosition(e1);
    p2 = sfSprite_getPosition(e2);
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

int dist_btw_sprite_and_point(sfSprite *e1, sfVector2f pos)
{
    sfVector2f p1 = {0, 0};

    if (!e1)
        return -1;
    p1 = sfSprite_getPosition(e1);
    return sqrt(pow((p1.x - pos.x), 2) + pow((p1.y - pos.y), 2));
}

int dist_btw_point(sfVector2f pos1, sfVector2f pos2)
{
    return sqrt(pow((pos1.x - pos2.x), 2) + pow((pos1.y - pos2.y), 2));
}
