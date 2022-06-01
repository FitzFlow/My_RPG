/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-idriss.said
** File description:
** is_on_sprite
*/
#include <SFML/Graphics.h>
#include "rpg.h"
#include <math.h>

int is_on_square(sfSprite *sprite, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfVector2f pos = sfSprite_getPosition(sprite);

    if (mouse.x >= pos.x && mouse.x <= pos.x + 140 &&
    mouse.y >= pos.y && mouse.y <= pos.y + 55)
        return 1;
    return 0;
}

int is_on_sprite(sfSprite *sprite, sfRenderWindow *window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfVector2f pos = sfSprite_getPosition(sprite);
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);

    if (mouse.x >= pos.x && mouse.x <= pos.x + rect.width &&
    mouse.y >= pos.y && mouse.y <= pos.y + rect.height)
        return 1;
    return 0;
}

int is_on_circle(sfSprite *sprite, sfCircleShape *circle)
{
    if (!sprite || !circle)
        return 0;
    sfVector2f pos_s = sfSprite_getPosition(sprite);
    sfVector2f pos_c = sfCircleShape_getPosition(circle);
    float dist = 0;
    float radius = sfCircleShape_getRadius(circle);
    pos_c.x -= radius;
    pos_c.y -= radius;
    dist = sqrt(pow((pos_s.x - pos_c.x), 2) + pow((pos_s.y - pos_c.y), 2));
    if (dist <= radius)
        return 1;
    return 0;
}

int is_on_sprite_hud(sfRenderWindow *window, int size, sfVector2f pos)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfVector2f pos_m = {0, 0};
    int dist = 0;

    pos_m.x = mouse.x;
    pos_m.y = mouse.y;
    dist = dist_btw_point(pos, pos_m);
    if (dist < size)
        return 1;
    return 0;
}

int is_on_square_sprite_hud(sfRenderWindow *window, sfVector2f pos,
sfVector2f s_size)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= pos.x && mouse.x <= pos.x + s_size.x &&
    mouse.y >= pos.y && mouse.y <= pos.y + s_size.y)
        return 1;
    return 0;
}
