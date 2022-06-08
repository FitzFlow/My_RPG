/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** all_struct
*/

#include "rpg.h"

void load_fight(all_t *all)
{
    all->fight = malloc(sizeof(fight_t));
    FIGHT->fight_system = init_fight();
    FIGHT->fight1 = not_in_fight;
    FIGHT->play_selection = p_none;
    FIGHT->fight_result.player_loose = false;
    FIGHT->fight_result.player_win = false;
    FIGHT->fight_turn.ennemy_turn = false;
    FIGHT->fight_turn.player_turn = true;
    FIGHT->ennemy.pv = 100;
}

void load_assets(all_t *all)
{
    int lean_coord[4][2] = {
        {2240, 1495},
        {2080, 1490},
        {1865, 1400},
        {1735, 1280}
    };
    all->lean = array_of_lean(4, lean_coord);
}

void load_all_pt2(all_t *all)
{
    all->in_player_house = false;
    all->game_pause = not_in_pause;
    all->interior_enum = in_city;
    all->fight_clock = sfClock_create();
    load_fight(all);
    fight_text(all);
    load_assets(all);
}
