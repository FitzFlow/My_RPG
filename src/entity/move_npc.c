/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** move_npc
*/
#include "rpg.h"

void move_pnj(all_t *all, npc_t *john, sfVector2f sens, int direction)
{
    anim_all_npc(john->entity->sprite, all, direction);
    sfSprite_move(john->entity->sprite, sens);
}
