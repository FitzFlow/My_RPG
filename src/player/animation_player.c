/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** animation_player
*/
#include "rpg.h"

void update_rect(all_t *all, int top, int left, int left_max)
{
    all->player->rect.top = top;
    all->player->rect.left += left;
    if (all->player->rect.left >= left_max)
        all->player->rect.left = 0;
}

void anim_guy(all_t *all)
{
    sfTime time = sfClock_getElapsedTime(all->clock_entity);

    if (time.microseconds > 100000.0) {
        if (TOUCH(sfKeyZ))
            update_rect(all, 0, 62, 528);
        if (TOUCH(sfKeyQ))
            update_rect(all, 64, 62, 528);
        if (TOUCH(sfKeyD))
            update_rect(all, 188, 62, 528);
        if (TOUCH(sfKeyS))
            update_rect(all, 125, 62, 528);
        sfSprite_setTextureRect(all->player->sprite, all->player->rect);
        sfClock_restart(all->clock_entity);
    }
}
