/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission
*/

#ifndef MISSION_H_
    #define MISSION_H_
    #include "all.h"

typedef enum mission_enum{
    m_none,
    animation_mission,
    start,
    loading,
    waite,
    dialog,
    end_figth,
    finish
} mission_enum_t;

typedef enum mission_game_5 {
    mission_5_not_start,
    mission_5_loading,
    mission_5_finish
} mission_game_5_t;

typedef struct mission {
    sfCircleShape *circle_mission;
    mission_enum_t mission1;
    mission_enum_t mission2;
    mission_enum_t mission3;
    mission_enum_t mission4;
    mission_game_5_t mission5;
} mission_t;

#endif /* !MISSION_H_ */
