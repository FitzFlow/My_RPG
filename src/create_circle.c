/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_circle
*/

#include <SFML/Graphics.h>
#include "define.h"

sfCircleShape *create_circle(sfVector2f pos, float radius, sfColor color)
{
    sfCircleShape *circle = sfCircleShape_create();

    if (!circle)
        return NULL;
    sfCircleShape_setPosition(circle, pos);
    sfCircleShape_setOutlineThickness(circle, 3);
    sfCircleShape_setOutlineColor(circle, color);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setRadius(circle, radius);
    return circle;
}
