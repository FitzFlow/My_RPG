/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_player_menu
*/
#include "rpg.h"

void load_player_menu(all_t *all)
{
    all->select_player = malloc(sizeof(select_player_t));

    SELECT_PLAYER = none;
    all->select_player->charac_menu = init_entity(CHARACTER_MENU, NULL, NULL);
    PLAYER_CHOICE_BOY = init_entity(PLAYER_BOY_SELECTION_T, &V2F(435, 300),
    NULL);
    PLAYER_CHOICE_BOY->size = V2F(2, 2);
    sfSprite_setScale(PLAYER_CHOICE_BOY->sprite, PLAYER_CHOICE_BOY->size);
    PLAYER_CHOICE_GIRL = init_entity(PLAYER_GIRL_SELECTION_T, &V2F(770, 300),
    NULL);
    PLAYER_CHOICE_GIRL->size = V2F(2, 2);
    sfSprite_setScale(PLAYER_CHOICE_GIRL->sprite, PLAYER_CHOICE_GIRL->size);
}
