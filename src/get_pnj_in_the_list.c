/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** get_pnj_in_the_list
*/
#include "rpg.h"

mob_t *get_pnj_in_the_list(mob_t *list, char *target)
{
    for (mob_t *pnj = list; pnj; pnj = pnj->next)
        if (!my_strcmp(pnj->id, target))
            return pnj;
    return NULL;
}
