/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** animate_hud_button
*/

#include "rpg.h"

void animate_inventory_btn(all_t *all)
{
    if (is_on_sprite_hud(WINDOW, 48, v2f(1217, 666))) {
        all->game->inventory->size = v2f(0.4, 0.6);
        sfSprite_setScale(all->game->inventory->sprite,
        all->game->inventory->size);
        sfVector2f pos = sfView_getCenter(all->view_player1);
        all->game->inventory->rect.left = 143;
        sfSprite_setTextureRect(all->game->inventory->sprite,
        all->game->inventory->rect);
        pos.x += 235;
        pos.y += 208;
        sfSprite_setPosition(all->game->inventory->sprite, pos);
    } else {
        all->game->inventory->rect.left = 0;
        sfSprite_setTextureRect(all->game->inventory->sprite,
        all->game->inventory->rect);
        all->game->inventory->size = v2f(0.3, 0.5);
        sfSprite_setScale(all->game->inventory->sprite,
        all->game->inventory->size);
    }
}

void animate_pause_btn(all_t *all)
{
    if (is_on_sprite_hud(WINDOW, 48, v2f(1217, 58))) {
        all->game->pause->size = v2f(0.4, 0.6);
        sfSprite_setScale(all->game->pause->sprite,
        all->game->pause->size);
        sfVector2f pos = sfView_getCenter(all->view_player1);
        pos.x += 235;
        pos.y -= 278;
        all->game->pause->rect.left = 143;
        sfSprite_setTextureRect(all->game->pause->sprite,
        all->game->pause->rect);
        sfSprite_setPosition(all->game->pause->sprite, pos);
    } else {
        all->game->pause->rect.left = 0;
        sfSprite_setTextureRect(all->game->pause->sprite,
        all->game->pause->rect);
        all->game->pause->size = v2f(0.3, 0.5);
        sfSprite_setScale(all->game->pause->sprite,
        all->game->pause->size);
    }
}
