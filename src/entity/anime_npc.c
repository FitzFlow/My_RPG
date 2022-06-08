/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** anime_npc
*/
#include "rpg.h"

void anim_all_npc(npc_t *npc, all_t *all, int direction)
{
    sfTime time = sfClock_getElapsedTime(all->timer);
    sfIntRect rect = sfSprite_getTextureRect(npc->entity->sprite);
    rect.top = direction;

    if (time.microseconds > 100000.0) {
        rect.left = rect.left + 57;
        if (rect.left >= npc->entity->height)
            rect.left = npc->entity->left_begin;
        sfSprite_setTextureRect(npc->entity->sprite, rect);
        sfClock_restart(all->timer);
    }
}
