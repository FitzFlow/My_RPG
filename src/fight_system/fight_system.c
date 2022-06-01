/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** fight_system
*/

#include "rpg.h"

int ddos_attack(all_t *all, unsigned int *player_life,
unsigned int *ennemy_life)
{
    if (FIGHT->fight1 != in_fight && FIGHT->choose_option != attack_selection)
        return 1;
    if (FIGHT->fight_turn.player_turn == true) {
        if (ddos_resize(all, ennemy_life) == 1)
            return 1;
    }
    if (resize_attack(all, player_life, 5) == 1)
        return 1;
    return 0;
}

int mitm_attack(all_t *all, unsigned int *player_life,
unsigned int *ennemy_life)
{
    if (FIGHT->fight1 != in_fight && FIGHT->choose_option != attack_selection)
        return 1;
    if (FIGHT->fight_turn.player_turn == true) {
        if (mitm_resize(all, ennemy_life) == 1)
            return 1;
    }
    if (resize_attack(all, player_life, 10) == 1)
        return 1;
    return 0;
}

int sql_attack(all_t *all, unsigned int *player_life,
unsigned int *ennemy_life)
{
    if (FIGHT->fight1 != in_fight && FIGHT->choose_option != attack_selection)
        return 1;
    if (FIGHT->fight_turn.player_turn == true) {
        if (sql_resize(all, ennemy_life) == 1)
            return 1;
    }
    if (resize_attack(all, player_life, 15) == 1)
        return 1;
    return 0;
}

int brute_attack(all_t *all, unsigned int *player_life,
unsigned int *ennemy_life)
{
    if (FIGHT->fight1 != in_fight && FIGHT->choose_option != attack_selection)
        return 1;
    if (FIGHT->fight_turn.player_turn == true) {
        if (brute_resize(all, ennemy_life) == 1)
            return 1;
    }
    if (resize_attack(all, player_life, 20) == 1)
        return 1;
    return 0;
}

void fight_system(all_t *all, unsigned int *player_life,
unsigned int *ennemy_life)
{
    if (*player_life <= 0) {
        FIGHT->fight_result.player_loose = true;
        FIGHT->fight_result.player_win = false;
        FIGHT->fight1 = not_in_fight;
        return;
    }
    if (*ennemy_life <= 0) {
        FIGHT->fight_result.player_loose = false;
        FIGHT->fight_result.player_win = true;
        FIGHT->fight1 = not_in_fight;
        return;
    }
    if (ddos_attack(all, player_life, ennemy_life) == 1)
        return;
    if (mitm_attack(all, player_life, ennemy_life) == 1)
        return;
    if (sql_attack(all, player_life, ennemy_life) == 1)
        return;
    if (brute_attack(all, player_life, ennemy_life) == 1)
        return;
}
