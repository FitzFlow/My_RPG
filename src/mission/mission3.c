/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission3
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void mission_3(all_t *all, npc_t *npc)
{
    if (CURRENT_MISSION == 2 && MISSION == m_finish) {
        CURRENT_MISSION++;
        MISSION = m_none;
        sfSprite_setPosition(npc->entity->sprite, v2f(1950, 2650));
    }
    if (CURRENT_MISSION != 3 || !npc || !npc->entity || !npc->entity->sprite)
        return;
    draw_my_npc(all, npc);
    if (MISSION == m_none && interaction_is_finish(all, npc))
        MISSION = m_finish;
}