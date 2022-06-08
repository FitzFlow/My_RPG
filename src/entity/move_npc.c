/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** move_npc
*/
#include "rpg.h"

void move_pnj(all_t *all, npc_t *npc, sfVector2f sens, int direction)
{
    anim_all_npc(npc, all, direction);
    sfSprite_move(npc->entity->sprite, sens);
}
