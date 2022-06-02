/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** button_interraction
*/

#include "rpg.h"

void animate_first_button(all_t *all)
{
    if (FIGHT->fight1 == in_fight) {
        animate_button_fight(all, FIGHT->fight_system->attack_button, 64);
        animate_button_fight(all, FIGHT->fight_system->run_button, 64);
        if (FIGHT->choose_option == attack_selection) {
            animate_button_fight(all, FIGHT->fight_system->back, 64);
            animate_button_fight(all, FIGHT->fight_system->brute_force_atk,
            64);
            animate_button_fight(all, FIGHT->fight_system->ddos_atk, 64);
            animate_button_fight(all, FIGHT->fight_system->mitm_atk, 64);
            animate_button_fight(all, FIGHT->fight_system->sql_atk, 64);
        }
    }
}

void set_player_pos(sfSprite *sprite, sfVector2f pos)
{
    sfVector2f player_pos = sfSprite_getPosition(sprite);
    player_pos.x = pos.x;
    player_pos.y = pos.y;
    sfSprite_setPosition(sprite, player_pos);
}

void interact_with_button(all_t *all)
{
    if (FIGHT->fight1 == in_fight) {
        if (is_on_sprite(FIGHT->fight_system->run_button->sprite, WINDOW) &&
        CLICKR && MOUSE(sfMouseLeft) &&
        FIGHT->choose_option == not_in_selection) {
            set_player_pos(all->player->sprite, v2f(2520, 425));
            FIGHT->fight1 = not_in_fight;
        }
        if (is_on_sprite(FIGHT->fight_system->attack_button->sprite, WINDOW) &&
        CLICKR && MOUSE(sfMouseLeft) &&
        FIGHT->choose_option != attack_selection)
            FIGHT->choose_option = attack_selection;
        if (is_on_sprite(FIGHT->fight_system->back->sprite, WINDOW) &&
        CLICKR && MOUSE(sfMouseLeft) &&
        FIGHT->choose_option == attack_selection)
            FIGHT->choose_option = not_in_selection;
    }
}
