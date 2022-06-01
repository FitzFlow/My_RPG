/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** anime_npc
*/
#include "rpg.h"

void anim_all_npc(sfSprite *sprite, all_t *all, int direction)
{
    sfTime time = sfClock_getElapsedTime(all->timer);
    sfIntRect rect = sfSprite_getTextureRect(sprite);
    rect.top = direction;

    if (time.microseconds > 100000.0) {
        rect.left = rect.left + 57;
        if (rect.left == 228)
            rect.left = 0;
        sfSprite_setTextureRect(sprite, rect);
        sfClock_restart(all->timer);
    }
}
