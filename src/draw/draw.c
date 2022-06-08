/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_sprite
*/
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include "my.h"

void draw_sprite(sfRenderWindow *renderWindow, const sfSprite *object,
const sfRenderStates *states)
{
    if (!object)
        return;
    sfRenderWindow_drawSprite(renderWindow, object, states);
}

void draw_text(sfRenderWindow *renderWindow, const sfText *object,
const sfRenderStates *states)
{
    if (!object)
        return;
    if (!my_strcmp(sfText_getString(object), "/"))
        return;
    sfRenderWindow_drawText(renderWindow, object, states);
}

void draw_circle(sfRenderWindow *renderWindow, const sfCircleShape *object,
const sfRenderStates *states)
{
    if (!object)
        return;
    sfRenderWindow_drawCircleShape(renderWindow, object, states);
}

void draw_array_text(sfRenderWindow *renderWindow, const sfText **object,
const sfRenderStates *states)
{
    if (!object)
        return;
    for (int i = 0; object[i]; i++)
        sfRenderWindow_drawText(renderWindow, object[i], states);
}
