/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** event.c
*/

#include "rpg.h"

mob_t *npc_closest_to_the_player(player_t *player, mob_t *npc)
{
    mob_t *closest_pnj = npc;
    int last_dist = dist_btw_sprite(npc->pnj->sprite, player->sprite);

    for (mob_t *pnj = npc; pnj; pnj = pnj->next)
        if (dist_btw_sprite(pnj->pnj->sprite, player->sprite) < last_dist) {
            closest_pnj = pnj;
            last_dist = dist_btw_sprite(pnj->pnj->sprite, player->sprite);
        }
    if (last_dist > DIST_INTERACTION)
        return NULL;
    return closest_pnj;
}

void interaction_npc(all_t *all)
{
    mob_t *npc = npc_closest_to_the_player(all->player, all->npc);

    if (!npc || !npc->dialog)
        return;
    if (npc->i < my_arraylen(npc->dialog)) {
        npc->i++;
    } else
        npc->i = 0;
}

void pause_menu_event(all_t *all)
{
            animate_pause_btn(all);
    if (IN_PAUSE) {
        if (CLICK && MOUSE(sfMouseLeft) &&
        is_on_square_sprite_hud(WINDOW, v2f(492, 203), v2f(290, 74)))
            all->game_pause = not_in_pause;
        if (CLICK && MOUSE(sfMouseLeft) &&
        is_on_square_sprite_hud(WINDOW, v2f(492, 350), v2f(290, 74)))
            nothing();
        if (CLICK && MOUSE(sfMouseLeft) &&
        is_on_square_sprite_hud(WINDOW, v2f(492, 480), v2f(290, 74))) {
            all->state_of_game = main_menu;
            all->select_player->character_menu = none;
            all->game_pause = not_in_pause;
            sfRenderWindow_setView(WINDOW, VIEW_DEFAULT(WINDOW));
            all->interior_enum = in_city;
            all->restart = 1;
        }
    }
}

void event_in_game(all_t *all)
{
    (KEY_RELEASE && KEY(sfKeyE)) ? interaction_npc(all) : 0;
    set_in_pause(all);
    interact_with_player_house(all);
    set_in_inventory(all);
    animate_inventory_btn(all);
    pause_menu_event(all);
    change_dress(all);
    interact_with_button(all);
    if (FIGHT->fight1 == in_fight)
        fight_system(all, &all->player->pv, &FIGHT->ennemy.pv);
}

void event(all_t *all)
{
    while (sfRenderWindow_pollEvent(WINDOW, &all->window->event)) {
        main_menu_interaction(all);
        if (all->window->event.type == sfEvtClosed || (ALT_F4))
            sfRenderWindow_close(WINDOW);
        zoom_mini_map(all);
        if (STATE_OF_GAME == game)
            event_in_game(all);
    }
}
