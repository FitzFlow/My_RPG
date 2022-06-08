/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission2
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void mission_2(all_t *all, npc_t *npc)
{
    if (CURRENT_MISSION == 1 && MISSION == m_finish &&
    all->interior_enum == player_house) {
        CURRENT_MISSION++;
        all->in_player_house = true;
        MISSION = m_none;
        sfSprite_setPosition(npc->entity->sprite, v2f(2135, 800));
        sfCircleShape_setPosition(CIRCLE_M, v2f(977, 425));
    }
    if (CURRENT_MISSION != 2 || !npc || !npc->entity || !npc->entity->sprite)
        return;
    if (all->interior_enum != in_city)
        return;
    draw_my_npc(all, npc);
    start_mission(all, npc, v2f(-2.5, -1), v2f(5, 0), 109);
    fight(all, npc, &MISSION);
    end_mission(all, npc, v2f(1350, 610));
}