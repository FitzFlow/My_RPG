/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** interact_button
*/

#include "rpg.h"

void animate_player2(all_t *all)
{
    if (is_on_sprite(PLAYER_CHOICE_GIRL->sprite, WINDOW)) {
        PLAYER_CHOICE_GIRL->size = V2F(2.20, 2.20);
        sfSprite_setScale(PLAYER_CHOICE_GIRL->sprite,
        PLAYER_CHOICE_GIRL->size);
        sfSprite_setPosition(PLAYER_CHOICE_GIRL->sprite, V2F(765, 295));
    } else {
        PLAYER_CHOICE_GIRL->size = V2F(2, 2);
        sfSprite_setScale(PLAYER_CHOICE_GIRL->sprite,
        PLAYER_CHOICE_GIRL->size);
        sfSprite_setPosition(PLAYER_CHOICE_GIRL->sprite, V2F(770, 300));
    }
}
