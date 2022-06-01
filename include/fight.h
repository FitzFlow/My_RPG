/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** fight
*/

#ifndef FIGHT_H_
    #define FIGHT_H_
    #include "all.h"

typedef struct fight_result {
    bool player_win;
    bool player_loose;
} fight_result_t;

typedef struct fight_turn {
    bool player_turn;
    bool ennemy_turn;
} fight_turn_t;

typedef enum fight_mission {
    not_in_fight,
    in_fight,
    run,
    player_loose,
    player_win
} fight_mission_1;

typedef enum attack_pannel {
    not_in_selection,
    attack_selection
} attack_pannel_t;

typedef struct fight_system {
    entity_t *back;
    entity_t *fight;
    entity_t *attack_button;
    entity_t *run_button;
    entity_t *ddos_atk;
    entity_t *sql_atk;
    entity_t *mitm_atk;
    entity_t *inform_table;
    entity_t *brute_force_atk;
} fight_system_t;

typedef struct ennemy_fight {
    unsigned int pv;
} ennemy_fight;

typedef struct fight_text {
    sfFont *font;
    sfText *text;
    sfText *text_pv;
    sfText *ennemy;
    sfText *ennemy_pv;
} fight_text_t;

typedef struct fight {
    fight_system_t *fight_system;
    fight_mission_1 fight1;
    attack_pannel_t choose_option;
    player_selection_t play_selection;
    fight_result_t fight_result;
    fight_turn_t fight_turn;
    ennemy_fight ennemy;
    fight_text_t fight_text;
} fight_t;

fight_system_t *init_fight(void);

#endif /* !FIGHT_H_ */
