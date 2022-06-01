/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_filter
*/
#include "rpg.h"

void load_filter(all_t *all)
{
    all->filter = malloc(sizeof(filter_t));
    FILTER = sfImage_createFromFile(COLLISION);
    FILTER_ROAD = sfImage_createFromFile(COLLISION_ROAD);
    all->filter->filter_player_house =
    sfImage_createFromFile(PLAYER_HOUSE_FILTER);
    all->filter->filter_other_house =
    sfImage_createFromFile(OTHER_HOUSE_FILTER);
}
