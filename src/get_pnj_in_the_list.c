/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** get_pnj_in_the_list
*/
#include "rpg.h"

npc_t *get_pnj_in_the_list(npc_t **list, char *target)
{
    for (int i = 0; list[i]; i++)
        if (!my_strcmp(list[i]->id, target))
            return list[i];
    return NULL;
}
