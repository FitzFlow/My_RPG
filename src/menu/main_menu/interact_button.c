/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** interact_button
*/

#include "rpg.h"

void new_game_interaction(all_t *all)
{
    sfVector2i click_pos = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f quit_pos = sfSprite_getPosition(NEW_GAME_BTN->sprite);

    if (CLICK && MOUSE(sfMouseLeft)) {
        if (click_pos.x >= quit_pos.x && click_pos.x <= quit_pos.x + 278 &&
        click_pos.y >= quit_pos.y && click_pos.y <= quit_pos.y + 75) {
            NEW_GAME_BTN->size = (sfVector2f){0.85, 0.85};
            sfSprite_setScale(NEW_GAME_BTN->sprite,
            NEW_GAME_BTN->size);
            SELECT_PLAYER = selection;
        }
    }
}

void quit_interaction(all_t *all)
{
    sfVector2i click_pos = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f quit_pos = sfSprite_getPosition(QUIT_BTN->sprite);

    if (CLICK && MOUSE(sfMouseLeft)) {
        if (click_pos.x >= quit_pos.x && click_pos.x <= quit_pos.x + 278 &&
        click_pos.y >= quit_pos.y && click_pos.y <= quit_pos.y + 75) {
            QUIT_BTN->size = (sfVector2f){0.85, 0.85};
            sfSprite_setScale(QUIT_BTN->sprite, QUIT_BTN->size);
            sfRenderWindow_close(WINDOW);
        }
    }
}

void back_interaction(all_t *all)
{
    sfVector2i click_pos = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f back_pos = sfSprite_getPosition(BACK_BTN->sprite);

    if (CLICK && MOUSE(sfMouseLeft)) {
        if (click_pos.x >= back_pos.x && click_pos.x <= back_pos.x + 278 &&
        click_pos.y >= back_pos.y && click_pos.y <= back_pos.y + 75) {
            BACK_BTN->size = (sfVector2f){0.85, 0.85};
            sfSprite_setScale(BACK_BTN->sprite, BACK_BTN->size);
            SELECT_PLAYER = none;
        }
    }
}

void animate_player1(all_t *all)
{
    if (is_on_sprite(PLAYER_CHOICE_BOY->sprite, WINDOW)) {
        PLAYER_CHOICE_BOY->size = v2f(2.20, 2.20);
        sfSprite_setScale(PLAYER_CHOICE_BOY->sprite,
        PLAYER_CHOICE_BOY->size);
        sfSprite_setPosition(PLAYER_CHOICE_BOY->sprite, v2f(430, 295));
    } else {
        PLAYER_CHOICE_BOY->size = v2f(2, 2);
        sfSprite_setScale(PLAYER_CHOICE_BOY->sprite,
        PLAYER_CHOICE_BOY->size);
        sfSprite_setPosition(PLAYER_CHOICE_BOY->sprite, v2f(435, 300));
    }
}

void main_menu_interaction(all_t *all)
{
    if (STATE_OF_GAME == main_menu && SELECT_PLAYER != selection &&
    SELECT_PLAYER != tuto) {
        new_game_interaction(all);
        quit_interaction(all);
        interact_with_tuto(all);
    }
    if (STATE_OF_GAME == main_menu && SELECT_PLAYER == selection) {
        back_interaction(all);
        animate_player1(all);
        animate_player2(all);
        man_player_select(all);
        girl_player_select(all);
    }
    if (STATE_OF_GAME == main_menu && SELECT_PLAYER == tuto)
        interact_with_back_tuto(all);
}
