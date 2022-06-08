/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission_1
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void start_mission(all_t *all, npc_t *npc)
{
    sfVector2f dest = {0, 0};

    if (MISSION == m_animation && !dest.x && !dest.y && CIRCLE_M)
        dest = sfCircleShape_getPosition(CIRCLE_M);
    if (MISSION == m_none && interaction_is_finish(all, npc))
        MISSION = m_animation;
    if (MISSION == m_animation) {
        mission_camera_animation(150, all, dest, v2f(2.5, -2.5));
        move_pnj(all, npc, v2f(5, 0), 109);
    }
}

void end_mission1(all_t *all, npc_t *npc)
{
    sfVector2f pos_j = {0, 0};

    if (MISSION == m_fight_win) {
        move_pnj(all, npc, v2f(0, 5), 0);
        pos_j = sfSprite_getPosition(npc->entity->sprite);
        (pos_j.y == 350) ? MISSION = m_end_speak : 0;
    }
    if (MISSION == m_end_speak && interaction_is_finish(all, npc))
        MISSION = m_finish;
    if (MISSION == m_finish)
        move_pnj(all, npc, v2f(5, 0), 109);
}

void mission_1(all_t *all, npc_t *npc)
{
    if (CURRENT_MISSION != 1 || !npc || !npc->entity || !npc->entity->sprite)
        return;
    draw_my_npc(all, npc);
    (MISSION == m_wait_fight || MISSION == m_animation) ?
    draw_circle(WINDOW, CIRCLE_M, NULL) : 0;
    start_mission(all, npc);
    fight(all, npc, &MISSION);
    end_mission1(all, npc);
}