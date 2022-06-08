/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** destroy
*/

#include "rpg.h"

void destroy_select_player(select_player_t *s_player)
{
    destroy_entity(s_player->charac_menu);
    destroy_entity(s_player->player_choice_boy);
    destroy_entity(s_player->player_choice_girl);
}

void destroy_window(window_t *window)
{
    sfRenderWindow_destroy(window->window);
    free(window);
}

void destroy_all(all_t *all)
{
    destroy_entity(BACK_BTN);
    destroy_entity(all->cadre);
    destroy_entity(CONTINUE_BTN);
    destroy_entity(NEW_GAME_BTN);
    destroy_entity(QUIT_BTN);
    (all->clock_entity) ? sfClock_destroy(all->clock_entity) : 0;
    destroy_filter(all->filter);
    destroy_game(all->game);
    destroy_menu(all->menu);
    destroy_my_music(all->menu_music);
    destroy_menu_pause(all->menu_pause);
    // destroy_mob(all->npc);
    destroy_phone(all->phone);
    destroy_select_player(all->select_player);
    sfView_destroy(all->view_player1);
    destroy_window(all->window);
}
