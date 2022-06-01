/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_interior_house
*/
#include "rpg.h"

void draw_interior_house(all_t *all)
{
    if (all->interior_enum == player_house) {
        draw_sprite(WINDOW, all->interior.player_int->sprite, NULL);
        draw_sprite(WINDOW, all->player->sprite, NULL);
        draw_sprite(WINDOW, all->interior.player_int2->sprite, NULL);
        draw_interaction_player_house(all);
        mission_2(all, get_pnj_in_the_list(all->npc, "John WAIT"));
    } else if (all->interior_enum == other_house) {
        draw_sprite(WINDOW, all->interior.other_int->sprite, NULL);
        draw_sprite(WINDOW, all->player->sprite, NULL);
        draw_sprite(WINDOW, all->interior.other_int2->sprite, NULL);
        draw_interaction_player_house(all);
        mission_3(all, get_pnj_in_the_list(all->npc, "Big SMOKE"));
    }
}
