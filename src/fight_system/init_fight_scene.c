/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** init_fight_scene.c
*/

#include "rpg.h"

fight_system_t *init_fight(void)
{
    fight_system_t *fight_system = malloc(sizeof(fight_system_t));
    fight_system->back = init_entity(FBACK_BTN, &V2F(983, 126),
    &I_RECT(0, 0, 64, 24));
    fight_system->fight = init_entity(FIGHT_SCENE, NULL, NULL);
    fight_system->attack_button = init_entity(ATTACK_BUTTON, &V2F(1090, 89),
    &I_RECT(0, 0, 64, 24));
    fight_system->run_button = init_entity(RUN_FIGHT, &V2F(1090, 121),
    &I_RECT(0, 0, 64, 24));
    fight_system->brute_force_atk = init_entity(BRUTE_FORCE_ATK,
    &V2F(1161, 127), &I_RECT(0, 0, 64, 24));
    fight_system->ddos_atk = init_entity(DDOS_ATK, &V2F(1061, 91),
    &I_RECT(0, 0, 64, 24));
    fight_system->mitm_atk = init_entity(MITM_ATK, &V2F(1161, 92),
    &I_RECT(0, 0, 64, 24));
    fight_system->sql_atk = init_entity(SQL_ATK, &V2F(1061, 126),
    &I_RECT(0, 0, 64, 24));
    fight_system->inform_table = init_entity(INFORMATION_TABLE, &V2F(961, 33),
    NULL);
    return fight_system;
}

void draw_fight_sprite(all_t *all)
{
    draw_sprite(WINDOW, FIGHT->fight_system->fight->sprite, NULL);
    draw_sprite(WINDOW, FIGHT->fight_system->inform_table->sprite, NULL);
    if (FIGHT->choose_option == not_in_selection) {
        draw_sprite(WINDOW, FIGHT->fight_system->attack_button->sprite, NULL);
        draw_sprite(WINDOW, FIGHT->fight_system->run_button->sprite, NULL);
    }
    if (FIGHT->choose_option == attack_selection) {
        draw_sprite(WINDOW, FIGHT->fight_system->back->sprite, NULL);
        draw_sprite(WINDOW, FIGHT->fight_system->brute_force_atk->sprite,
        NULL);
        draw_sprite(WINDOW, FIGHT->fight_system->ddos_atk->sprite, NULL);
        draw_sprite(WINDOW, FIGHT->fight_system->mitm_atk->sprite, NULL);
        draw_sprite(WINDOW, FIGHT->fight_system->sql_atk->sprite, NULL);
    }
}
