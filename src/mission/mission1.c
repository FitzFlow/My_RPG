/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** mission_1
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void start_mission(all_t *all, npc_t *npc,
sfVector2f sens_cam, sfVector2f sens_npc, int direction)
{
    sfVector2f dest = {0, 0};

    if (MISSION == m_animation && !dest.x && !dest.y && CIRCLE_M)
        dest = sfCircleShape_getPosition(CIRCLE_M);
    if (MISSION == m_none && interaction_is_finish(all, npc))
        MISSION = m_animation;
    if (MISSION == m_animation) {
        mission_camera_animation(150, all, dest, sens_cam);
        move_pnj(all, npc, sens_npc, direction);
    }
}

void end_mission(all_t *all, npc_t *npc, sfVector2f pos)
{
    if (MISSION == m_fight_win) {
        SET_POS_S(npc->entity->sprite, pos);
        MISSION = m_end_speak;
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
    start_mission(all, npc, v2f(2.5, -2.5), v2f(5, 0), 109);
    fight(all, npc, &MISSION);
    end_mission(all, npc, v2f(GET_POS_S(npc->entity->sprite).x, 350));
}