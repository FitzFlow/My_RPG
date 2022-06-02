/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** spawn_pnj
*/
#include "rpg.h"

bool check_spawn(all_t *all, sfVector2f pos)
{
    int i = 0;
    if (check_colision(pos, all->filter->filter_road, &i))
        return true;
    return false;
}

sfVector2f get_coord_spawn(all_t *all)
{
    sfVector2u size = {3000, 3000};
    sfVector2f new_pos = {-1, -1};
    int end = 10000;

    if (!size.x || !size.y)
        return v2f(0, 0);
    srand(random_number());
    for (bool value = false; value == false && end; end--) {
        new_pos.x = rand() % size.x;
        new_pos.y = rand() % size.y;
        value = check_spawn(all, new_pos);
    }
    return new_pos;
}

void spawn_pnj(all_t *all)
{
    mob_t *pnj = all->pnj;

    for (; pnj; pnj = pnj->next)
        sfSprite_setPosition(PNJ_S, get_coord_spawn(all));
}
