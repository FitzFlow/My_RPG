/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** debuger
*/
#include "rpg.h"

/*
    Speed
    Collision
    Ghost
    Mission
*/

void active_btn(all_t *all)
{
    if (is_on_square_sprite_hud(WINDOW, v2f(20, 20), v2f(85, 40))) {
        if (CLICK && !DEBUG->all_debug[0])
            DEBUG->all_debug[0] = true;
        else if (CLICK && DEBUG->all_debug[0])
            DEBUG->all_debug[0] = false;
        sfRectangleShape_setFillColor(DEBUG->all[1], sfGreen);
    } else if (!DEBUG->all_debug[0])
        sfRectangleShape_setFillColor(DEBUG->all[1], sfBlack);
    if (is_on_square_sprite_hud(WINDOW, v2f(20, 120), v2f(85, 40))) {
        if (CLICK && PLAYER->speed <= 20)
            PLAYER->speed += 1;
        sfRectangleShape_setFillColor(DEBUG->all[2], sfGreen);
    } else
        sfRectangleShape_setFillColor(DEBUG->all[2], sfBlack);
    if (is_on_square_sprite_hud(WINDOW, v2f(20, 220), v2f(85, 40))) {
        if (CLICK && PLAYER->speed > 5)
            PLAYER->speed -= 1;
        sfRectangleShape_setFillColor(DEBUG->all[3], sfGreen);
    } else
        sfRectangleShape_setFillColor(DEBUG->all[3], sfBlack);
}

void debugger(all_t *all)
{
    if (!DEBUG || !DEBUG->debug || STATE_OF_GAME != game ||
    !all->view_player1)
        return;
    sfVector2f pos = sfView_getCenter(all->view_player1);
    pos.x -= 300;
    pos.y -= 300;
    SET_POS_RECT(DEBUG->all[0], pos);
    SET_POS_RECT(DEBUG->all[1], v2f(pos.x += 20, pos.y += 20));
    sfText_setPosition(DEBUG->text[1], v2f(pos.x, pos.y));
    for (int i = 0; DEBUG->all[i]; i++) {
        if (i > 1) {
            SET_POS_RECT(DEBUG->all[i], v2f(pos.x, pos.y += 80));
            sfText_setPosition(DEBUG->text[i], v2f(pos.x, pos.y));
        }
        draw_rect(WINDOW, DEBUG->all[i], NULL);
        draw_text(WINDOW, DEBUG->text[i], NULL);
    }
}