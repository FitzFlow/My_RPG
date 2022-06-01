/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_main_menu
*/

#include "rpg.h"

void draw_selection_and_tuto(all_t *all)
{
    if (SELECT_PLAYER == selection) {
        animate_button(all, BACK_BTN, 277, V2F(480, 612));
        draw_selection_player(all);
    }
    if (STATE_OF_GAME == main_menu && SELECT_PLAYER == tuto) {
        draw_sprite(WINDOW, all->menu->tuto_key->sprite, NULL);
        animate_button(all, BACK_BTN, 277, V2F(480, 566));
        sfSprite_setPosition(BACK_BTN->sprite, V2F(490, 576));
        draw_sprite(WINDOW, BACK_BTN->sprite, NULL);
    }
}
