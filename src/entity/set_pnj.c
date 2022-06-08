/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** set_pnj
*/
#include "rpg.h"

void init_pnj_and_npc(all_t *all)
{
    all->pnj = init_pnj(0);
    all->npc = init_npc("./src/dialog/dialog_cfg");
    all->player->mob_around = NULL;
    all->player->old_position = sfSprite_getPosition(all->player->sprite);
    spawn_pnj(all);
}
