/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** select_player_menu.c
*/

#include "rpg.h"

void girl_player_select(all_t *all)
{
    if (CLICK && MOUSE(sfMouseLeft)) {
        if (is_on_sprite(PLAYER_CHOICE_GIRL->sprite, WINDOW)) {
            PLAYER_CHOICE_GIRL->size = (sfVector2f){0.85, 0.85};
            sfSprite_setScale(PLAYER_CHOICE_GIRL->sprite,
            PLAYER_CHOICE_GIRL->size);
            all->player->texture =
            sfTexture_createFromFile(PLAYER_GIRL_BLUE, NULL);
            sfSprite_setTexture(PLAYER_S, all->player->texture, sfTrue);
            STATE_OF_GAME = game;
            FIGHT->play_selection = player_girl;
        }
    }
}

void man_player_select(all_t *all)
{
    if (CLICK && MOUSE(sfMouseLeft)) {
        if (is_on_sprite(PLAYER_CHOICE_BOY->sprite, WINDOW)) {
            PLAYER_CHOICE_BOY->size = (sfVector2f){0.85, 0.85};
            sfSprite_setScale(PLAYER_CHOICE_BOY->sprite,
            PLAYER_CHOICE_BOY->size);
            all->player->texture =
            sfTexture_createFromFile(PLAYER_BOY, NULL);
            sfSprite_setTexture(PLAYER_S, all->player->texture, sfTrue);
            STATE_OF_GAME = game;
            FIGHT->play_selection = player_boy;
        }
    }
}

void interact_with_tuto(all_t *all)
{
    if (CLICK && MOUSE(sfMouseLeft)) {
        if (is_on_sprite(all->menu->key->sprite, WINDOW))
            all->select_player->character_menu = tuto;
    }
}

void interact_with_back_tuto(all_t *all)
{
    if (CLICK && MOUSE(sfMouseLeft)) {
        if (is_on_sprite(BACK_BTN->sprite, WINDOW))
            all->select_player->character_menu = none;
    }
}
