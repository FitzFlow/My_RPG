/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_car2
*/

#include "rpg.h"

void clock_car(all_t *all)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer);
    if (time.microseconds > 100000.0) {
        while (all->car_of[line] != NULL) {
            all->car_of[line]->rect.left += 160;
            if (all->car_of[line]->rect.left == 480)
                all->car_of[line]->rect.left = 0;
            sfSprite_setTextureRect(all->car_of[line]->sprite,
            all->car_of[line]->rect);
            line++;
        }
        sfClock_restart(all->timer);
    }
}

void move_car_zero(all_t *all)
{
    if (all->car_of[0]->position.x <= 2335) {
        all->car_of[0]->rect.top = 320;
        all->car_of[0]->position.x += 2;
    } else {
        all->car_of[0]->rect.top = 0;
        all->car_of[0]->position.y += 2;
    }
    if (all->car_of[0]->position.y >= 3500) {
        all->car_of[0]->position.x = -200;
        all->car_of[0]->position.y = 100;
    }
    sfSprite_setPosition(all->car_of[0]->sprite, all->car_of[0]->position);
    sfSprite_setTextureRect(all->car_of[0]->sprite, all->car_of[0]->rect);
}

void move_car_two(all_t *all)
{
    if (all->car_of[2]->position.y <= 2165) {
        all->car_of[2]->rect.top = 0;
        all->car_of[2]->position.y += 2;
    } else {
        all->car_of[2]->rect.top = 160;
        all->car_of[2]->position.x -= 2;
    }
    if (all->car_of[2]->position.x <= -300) {
        all->car_of[2]->position.x = 2340;
        all->car_of[2]->position.y = -200;
    }
    sfSprite_setPosition(all->car_of[2]->sprite, all->car_of[2]->position);
    sfSprite_setTextureRect(all->car_of[2]->sprite, all->car_of[2]->rect);
}

void move_car_four(all_t *all)
{
    if (all->car_of[4]->position.x >= 2405) {
        all->car_of[4]->rect.top = 160;
        all->car_of[4]->position.x -= 2;
    } else {
        all->car_of[4]->rect.top = 480;
        all->car_of[4]->position.y -= 2;
    }
    if (all->car_of[4]->position.y <= -300) {
        all->car_of[4]->position.x = 3400;
        all->car_of[4]->position.y = 2030;
    }
    sfSprite_setPosition(all->car_of[4]->sprite, all->car_of[4]->position);
    sfSprite_setTextureRect(all->car_of[4]->sprite, all->car_of[4]->rect);
}
