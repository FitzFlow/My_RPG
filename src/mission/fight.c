/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** fight
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void fight(all_t *all, npc_t *npc, mission_e *ptr_mission)
{
    if (*ptr_mission != m_wait_fight)
        return;
    if (is_on_circle(PLAYER_S, CIRCLE_M) && FIGHT->fight1 == not_in_fight)
        FIGHT->fight1 = in_fight;
    if (FIGHT->fight_result.player_win == true) {
        MISSION = m_fight_win;
        sfSprite_setPosition(npc->entity->sprite, v2f(2900, 100));
        sfCircleShape_setPosition(CIRCLE_M, v2f(-100, -100));
        FIGHT->fight1 = not_in_fight;
        FIGHT->ennemy.pv = 100;
        all->player->pv = 100;
        FIGHT->fight_result.player_loose = false;
        FIGHT->fight_result.player_win = false;
    } else if (FIGHT->fight_result.player_loose) {
        *ptr_mission = m_wait_fight;
        FIGHT->fight1 = not_in_fight;
        sfSprite_setPosition(PLAYER_S,
        v2f(GET_POS_S(PLAYER_S).x - 15, GET_POS_S(PLAYER_S).y));
    }
}
