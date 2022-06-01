/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_car3
*/

#include "rpg.h"

void move_car_one_1(all_t *all)
{
    if (all->car_of[1]->position.x >= 2335 &&
    all->car_of[1]->position.y <= 2120) {
        all->car_of[1]->rect.top = 0;
        all->car_of[1]->position.y += 2;
    } else {
        all->car_of[1]->rect.top = 320;
        all->car_of[1]->position.x += 2;
    }
    if (all->car_of[1]->position.x >= 3600) {
        all->car_of[1]->position.x = 550;
        all->car_of[1]->position.y = -200;
    }
}

void move_car_one(all_t *all)
{
    if (all->car_of[1]->position.y <= 100) {
        all->car_of[1]->rect.top = 0;
        all->car_of[1]->position.y += 2;
    } else if (all->car_of[1]->position.y >= 100 &&
    all->car_of[1]->position.x <= 2335) {
        all->car_of[1]->rect.top = 320;
        all->car_of[1]->position.x += 2;
    } else
        move_car_one_1(all);
    sfSprite_setPosition(all->car_of[1]->sprite, all->car_of[1]->position);
    sfSprite_setTextureRect(all->car_of[1]->sprite, all->car_of[1]->rect);
}

void move_car_three(all_t *all)
{
    if (all->car_of[3]->position.x >= 2335 &&
    all->car_of[3]->position.y <= 2120) {
        all->car_of[3]->rect.top = 160;
        all->car_of[3]->position.x -= 2;
    } else if (all->car_of[3]->position.x <= 2335 &&
    all->car_of[3]->position.y <= 2120) {
        all->car_of[3]->rect.top = 0;
        all->car_of[3]->position.y += 2;
    } else {
        all->car_of[3]->rect.top = 320;
        all->car_of[3]->position.x += 2;
    }
    if (all->car_of[3]->position.x >= 3800) {
        all->car_of[3]->position.x = 3700;
        all->car_of[3]->position.y = 30;
    }
    sfSprite_setPosition(all->car_of[3]->sprite, all->car_of[3]->position);
    sfSprite_setTextureRect(all->car_of[3]->sprite, all->car_of[3]->rect);
}

void move_car_five_5(all_t *all)
{
    if (all->car_of[5]->position.x <= 970 &&
    all->car_of[5]->position.y >= 1410) {
        all->car_of[5]->rect.top = 480;
        all->car_of[5]->position.y -= 2;
    } else {
        all->car_of[5]->rect.top = 160;
        all->car_of[5]->position.x -= 2;
    }
    if (all->car_of[5]->position.x <= -200) {
        all->car_of[5]->position.x = 2410;
        all->car_of[5]->position.y = 3400;
    }
}

void move_car_five(all_t *all)
{
    if (all->car_of[5]->position.y >= 2180) {
        all->car_of[5]->rect.top = 480;
        all->car_of[5]->position.y -= 2;
    } else if (all->car_of[5]->position.x >= 970) {
        all->car_of[5]->rect.top = 160;
        all->car_of[5]->position.x -= 2;
    } else
        move_car_five_5(all);
    sfSprite_setPosition(all->car_of[5]->sprite, all->car_of[5]->position);
    sfSprite_setTextureRect(all->car_of[5]->sprite, all->car_of[5]->rect);
}
