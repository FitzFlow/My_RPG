/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission4
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void get_lean_bottle(all_t *all)
{
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++) {
        if (dist_btw_sprite(PLAYER_S, all->lean[cpt]->sprite) <= 15)
            all->lean[cpt]->taked = true;
    }
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++)
        if (all->lean[cpt]->taked == false)
            return;
    MISSION = m_end_speak;
}

void draw_lean_bottle(all_t *all)
{
    for (int cpt = 0; all->lean[cpt] != NULL; cpt++) {
        if (all->lean[cpt]->taked == false)
            draw_sprite(all->window->window, all->lean[cpt]->sprite, NULL);
    }
}

void fight_mission_4(all_t *all)
{
    get_lean_bottle(all);
}

void mission_4(all_t *all, npc_t *npc)
{
    if (CURRENT_MISSION == 3 && MISSION == m_finish) {
        CURRENT_MISSION++;
        MISSION = m_none;
        sfSprite_setPosition(npc->entity->sprite, v2f(855, 1960));
    }
    if (CURRENT_MISSION != 4 || !npc || !npc->entity || !npc->entity->sprite)
        return;
    draw_my_npc(all, npc);
    if (MISSION == m_none && interaction_is_finish(all, npc))
        MISSION = m_wait_fight;
    if (MISSION == m_wait_fight) {
        get_lean_bottle(all);
        MISSION = m_end_speak;
    }
    if (MISSION == m_end_speak && interaction_is_finish(all, npc))
        MISSION = m_finish;
    if (MISSION == m_finish) {
        move_pnj(all, npc, v2f(-1, 0), 55);
        (GET_POS_S(npc->entity->sprite).x <= 825) ? CURRENT_MISSION++ : 0;
    }
}