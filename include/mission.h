/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission
*/

#ifndef MISSION_H_
    #define MISSION_H_
    #include <SFML/Graphics.h>

typedef enum mission_enum_e{
    m_none,
    m_animation,
    m_wait_fight,
    m_fight_win,
    m_end_speak,
    m_finish,
    m_end,
} mission_e;

typedef struct mission {
    sfCircleShape *circle_mission;
    mission_e mission;
    mission_e *secondary_mission;
    int current_mission;
} mission_t;

#endif /* !MISSION_H_ */
