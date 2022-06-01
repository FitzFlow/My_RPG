/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_pause
*/
#include "rpg.h"

void draw_pause(all_t *all)
{
    if (all->game_pause == in_pause) {
        move_pause_menu(all);
        draw_sprite(WINDOW, PAUSE_MENU->sprite, NULL);
        draw_sprite(WINDOW, PAUSE_CADRE->sprite, NULL);
        draw_sprite(WINDOW, PAUSE_TXT->sprite, NULL);
        draw_sprite(WINDOW, all->RESUME_BUTTON->sprite, NULL);
        draw_sprite(WINDOW, all->SETTING_BUTTON->sprite, NULL);
        draw_sprite(WINDOW, all->MENU_BUTTON->sprite, NULL);
        interact_grown_button(all);
    } else if (all->state_of_game == game) {
        draw_sprite(WINDOW, PAUSE->sprite, NULL);
        dont_touch_me(all);
    }
}
