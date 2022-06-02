/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** init_player
*/

#include "rpg.h"

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));
    player->sprite = sfSprite_create();
    player->position = v2f(1925, 1150);
    player->size = v2f(1, 1);
    player->rect = I_RECT(0, 0, 31, 49);
    sfSprite_setTextureRect(player->sprite, player->rect);
    sfSprite_setPosition(player->sprite, player->position),
    sfSprite_setScale(player->sprite, player->size),
    player->pv = 100;
    player->damage = 20;
    player->xp = 0;
    player->speed = 5;
    player->level = 1;
    return (player);
}
