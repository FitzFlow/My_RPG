/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** camera_animation
*/
#include "mission.h"
#include "rpg.h"
#include "define.h"

void mission_camera_animation(all_t *all, sfVector2f dest, int speed)
{
    if (!animation_camera(all->view_player1, dest, speed)) {
        sfView_setCenter(all->view_player1, GET_POS_S(PLAYER_S));
        MISSION = m_wait_fight;
    }
}
