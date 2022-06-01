/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** init_interior
*/

#include "rpg.h"

void load_interior(all_t *all)
{
    all->interior.player_int = init_entity(PLAYER_HOUSE, NULL, NULL);
    all->interior.player_int2 = init_entity(PLAYER_HOUSE2, NULL, NULL);
    all->interior.other_int = init_entity(OTHER_HOUSE, NULL, NULL);
    all->interior.other_int2 = init_entity(OTHER_HOUSE2, NULL, NULL);
    all->interior.interact_e = init_entity(INTERACT_E, &V2F(2210, 1005), NULL);
}
