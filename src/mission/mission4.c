/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission4
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void get_lean_bottle(all_t *all, mission_e *mission)
{
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++) {
        if (dist_btw_sprite(PLAYER_S, all->lean[cpt]->sprite) <= 15)
            all->lean[cpt]->taked = true;
    }
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++)
        if (all->lean[cpt]->taked == false)
            return;
    *mission = m_end_speak;
}

void draw_lean_bottle(all_t *all)
{
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++) {
        if (all->lean[cpt]->taked == false)
            draw_sprite(all->window->window, all->lean[cpt]->sprite, NULL);
    }
}

void mission_4(all_t *all, npc_t *npc, mission_e *mission)
{
    if (CURRENT_MISSION < 4 || !npc || !npc->entity || !npc->entity->sprite)
        return;
    if (*mission == m_none)
        sfSprite_setPosition(npc->entity->sprite, v2f(855, 1960));
    if (*mission != m_end)
        draw_my_npc(all, npc, *mission);
    if (*mission == m_none && interaction_is_finish(all, npc))
        *mission = m_wait_fight;
    if (*mission == m_wait_fight)
        get_lean_bottle(all, mission);
    if (*mission == m_end_speak && interaction_is_finish(all, npc))
        *mission = m_finish;
    if (*mission == m_finish) {
        move_pnj(all, npc, v2f(-1, 0), 55);
        (GET_POS_S(npc->entity->sprite).x <= 825) ? *mission = m_end : 0;
    }
}