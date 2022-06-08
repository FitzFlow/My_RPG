/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** interaction
*/
#include "mission.h"
#include "rpg.h"

int interaction_is_finish(all_t *all, npc_t *npc)
{
    if (KEY_RELEASE && KEY(sfKeyE) && !(*npc->dialog)[npc->i] &&
    dist_btw_sprite(PLAYER_S, npc->entity->sprite) <= DIST_INTERACTION) {
        npc->i = 0;
        npc->dialog++;
        return 1;
    }
    return 0;
}
