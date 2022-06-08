/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission4
*/

#include "rpg.h"

// void get_lean_bottle(all_t *all)
// {
//     printf("pass\n");
//     sfVector2f player_pos = v2f(0, 0);
//     sfVector2f lean_pos = v2f(0, 0);
//     int cpt = 0;

//     while (all->lean[cpt] != NULL) {
//         player_pos = sfSprite_getPosition(all->player->sprite);
//         lean_pos = sfSprite_getPosition(all->lean[cpt]->sprite);
//         // all->lean[cpt]->taked = true;
//         cpt++;
//     }
// }

void draw_lean_bottle(all_t *all)
{
    int cpt = 0;

    while (all->lean[cpt] != NULL) {
        if (all->lean[cpt]->taked == false)
            draw_sprite(all->window->window, all->lean[cpt]->sprite, NULL);
        cpt++;
    }
}

static int interaction(all_t *all, npc_t *pnj, mission_enum_t mission, int i)
{
    if (KEY_RELEASE && KEY(sfKeyE) && MISSION4 == mission &&
    dist_btw_sprite(PLAYER_S, pnj->entity->sprite) <= DIST_INTERACTION &&
    pnj->i == i) {
        return 1;
    }
    return 0;
}

void mission_4(all_t *all, npc_t *freeze)
{
    if (MISSION3 != finish)
        return;
    draw_my_npc(all, freeze);
    if (interaction(all, freeze, m_none, 8)) {
        sfSprite_setPosition(freeze->entity->sprite, v2f(855, 1960));
        MISSION4 = start;
    }
    if (KEY(sfKeyT) && MISSION4 == start) {
        // (my_arraylen(freeze->dialog) >= 9) ? freeze->i = 9 : 0;
        MISSION4 = end_figth;
    }
    if (MISSION4 == end_figth && interaction(all, freeze, end_figth, 12)) {
        MISSION4 = finish;
        all->mission->mission5 = mission_5_loading;
    }
    if (MISSION4 == finish)
        move_pnj(all, freeze, v2f(-5, 0), 55);
}
