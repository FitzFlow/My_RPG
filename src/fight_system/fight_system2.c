/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** fight_system
*/

#include "rpg.h"

void fight_clock_damage(all_t *all, unsigned int *player_life, int effect)
{
    if (FIGHT->fight_turn.ennemy_turn != true)
        return;
    sfTime time = sfClock_getElapsedTime(all->fight_clock);

    if (time.microseconds > 700000) {
        sfClock_restart(all->fight_clock);
        *player_life -= effect;
        return;
    }
}

int resize_attack(all_t *all, unsigned int *player_life, int nb)
{
    if (FIGHT->fight_turn.ennemy_turn == true) {
        if (*player_life > 0) {
            fight_clock_damage(all, player_life, nb);
            FIGHT->fight_turn.player_turn = true;
            FIGHT->fight_turn.ennemy_turn = false;
            return 1;
        }
    }
    return 0;
}
