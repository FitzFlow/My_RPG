/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_car4
*/

#include "rpg.h"

void dont_touch_me(all_t *all)
{
    sfFloatRect g = sfSprite_getGlobalBounds(all->player->sprite);
    sfFloatRect c = sfSprite_getGlobalBounds(all->car_of[0]->sprite);
    sfFloatRect c1 = sfSprite_getGlobalBounds(all->car_of[1]->sprite);
    sfFloatRect c2 = sfSprite_getGlobalBounds(all->car_of[2]->sprite);
    sfFloatRect c3 = sfSprite_getGlobalBounds(all->car_of[3]->sprite);
    sfFloatRect c4 = sfSprite_getGlobalBounds(all->car_of[4]->sprite);
    sfFloatRect c5 = sfSprite_getGlobalBounds(all->car_of[5]->sprite);
    sfFloatRect c6 = sfSprite_getGlobalBounds(all->car_of[6]->sprite);
    sfFloatRect c7 = sfSprite_getGlobalBounds(all->car_of[7]->sprite);

    clock_car(all);
    (!sfFloatRect_intersects(&g, &c, NULL)) ? move_car_zero(all) : 0;
    (!sfFloatRect_intersects(&g, &c1, NULL)) ? move_car_one(all) : 0;
    (!sfFloatRect_intersects(&g, &c2, NULL)) ? move_car_two(all) : 0;
    (!sfFloatRect_intersects(&g, &c3, NULL)) ? move_car_three(all) : 0;
    (!sfFloatRect_intersects(&g, &c4, NULL)) ? move_car_four(all) : 0;
    (!sfFloatRect_intersects(&g, &c5, NULL)) ? move_car_five(all) : 0;
    (!sfFloatRect_intersects(&g, &c6, NULL)) ? move_car_six(all) : 0;
    (!sfFloatRect_intersects(&g, &c7, NULL)) ? move_car_seven(all) : 0;
}
