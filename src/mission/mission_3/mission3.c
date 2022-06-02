/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission3
*/

#include "rpg.h"

static int interaction(all_t *all, mob_t *pnj, mission_enum_t mission, int i)
{
    if (KEY_RELEASE && KEY(sfKeyE) && MISSION3 == mission &&
    dist_btw_sprite(PLAYER_S, pnj->pnj->sprite) <= DIST_INTERACTION &&
    pnj->i == i) {
        return 1;
    }
    return 0;
}

void mission_3(all_t *all, mob_t *luidji)
{
    if (all->interior_enum != other_house || MISSION4 != m_none ||
    MISSION2 != finish || MISSION3 == finish)
        return;
    sfSprite_setPosition(luidji->pnj->sprite, v2f(1950, 2650));
    if (MISSION3 == m_none && all->interior_enum == other_house)
        MISSION3 = loading;
    if (MISSION3 == loading && interaction(all, luidji, loading, 8))
        MISSION3 = finish;
    if (MISSION3 == start && KEY(sfKeyR))
        MISSION3 = finish;
    draw_my_npc(all, luidji);
}
