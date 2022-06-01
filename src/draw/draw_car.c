/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_car
*/
#include "rpg.h"

void draw_car(all_t *all)
{
    int line = 0;
    while (all->car_of[line] != NULL) {
        draw_sprite(WINDOW, all->car_of[line]->sprite, NULL);
        line++;
    }
}
