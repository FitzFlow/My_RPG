/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** fight_system3
*/

#include "rpg.h"

int brute_resize(all_t *all, unsigned int *ennemy_life)
{
    if (is_on_sprite(FIGHT->fight_system->brute_force_atk->sprite, WINDOW) &&
    CLICKR && MOUSE(sfMouseLeft))
        if (*ennemy_life > 0) {
            *ennemy_life -= 20;
            FIGHT->fight_turn.player_turn = false;
            FIGHT->fight_turn.ennemy_turn = true;
            FIGHT->choose_option = not_in_selection;
            return 1;
        }
    return 0;
}

int sql_resize(all_t *all, unsigned int *ennemy_life)
{
    if (is_on_sprite(FIGHT->fight_system->sql_atk->sprite, WINDOW) &&
    CLICKR && MOUSE(sfMouseLeft))
        if (*ennemy_life > 0) {
            *ennemy_life -= 15;
            FIGHT->fight_turn.player_turn = false;
            FIGHT->fight_turn.ennemy_turn = true;
            FIGHT->choose_option = not_in_selection;
            return 1;
        }
    return 0;
}

int mitm_resize(all_t *all, unsigned int *ennemy_life)
{
    if (is_on_sprite(FIGHT->fight_system->mitm_atk->sprite, WINDOW) &&
    CLICKR && MOUSE(sfMouseLeft))
        if (*ennemy_life > 0) {
            *ennemy_life -= 10;
            FIGHT->fight_turn.player_turn = false;
            FIGHT->fight_turn.ennemy_turn = true;
            FIGHT->choose_option = not_in_selection;
            return 1;
        }
    return 0;
}

int ddos_resize(all_t *all, unsigned int *ennemy_life)
{
    if (is_on_sprite(FIGHT->fight_system->ddos_atk->sprite, WINDOW) &&
    CLICKR && MOUSE(sfMouseLeft))
        if (*ennemy_life > 0) {
            *ennemy_life -= 5;
            FIGHT->fight_turn.player_turn = false;
            FIGHT->fight_turn.ennemy_turn = true;
            FIGHT->choose_option = not_in_selection;
            return 1;
        }
    return 0;
}
