/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** create_rect
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>

sfRectangleShape *create_rect(sfVector2f pos, sfVector2f size, sfColor color)
{
    sfRectangleShape *rect = sfRectangleShape_create();

    if (!rect)
        return NULL;
    sfRectangleShape_setPosition(rect, pos);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setFillColor(rect, color);
    return rect;
}
