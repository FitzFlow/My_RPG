/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve copy
** File description:
** create_car
*/

#include "rpg.h"

entity_t *init_car(int x, int y, const char *texture)
{
    entity_t *sprite = malloc(sizeof(entity_t));
    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(texture, NULL);
    sprite->size = (sfVector2f){0.75, 0.75};
    sprite->position = (sfVector2f){x, y};
    sprite->rect = (sfIntRect){0, 0, 160, 160};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->size);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect);
    sfSprite_setPosition(sprite->sprite, sprite->position);
    return (sprite);
}

entity_t **tab_of_car(int nb_car, int *x, int *y)
{
    entity_t **tab = malloc(sizeof(entity_t *) * (nb_car + 1));
    int line = 0;
    const char *bob[4] = {CAR, CAR_R, CAR_G, CAR_B};
    srand(random_number());
    int nb = 0;

    while (line != nb_car) {
        nb = rand() % 3;
        tab[line] = init_car(x[line], y[line], bob[nb]);
        line++;
    }
    tab[line] = NULL;
    return tab;
}

void move_car_six(all_t *all)
{
    if (all->car_of[6]->position.x <= 2405) {
        all->car_of[6]->rect.top = 320;
        all->car_of[6]->position.x += 2;
    } else if (all->car_of[6]->position.x >= 2405 &&
    all->car_of[6]->position.y >= 110) {
        all->car_of[6]->rect.top = 480;
        all->car_of[6]->position.y -= 2;
    } else {
        all->car_of[6]->rect.top = 320;
        all->car_of[6]->position.x += 2;
    }
    if (all->car_of[6]->position.x >= 3600) {
        all->car_of[6]->position.x = -200;
        all->car_of[6]->position.y = 2245;
    }
    sfSprite_setPosition(all->car_of[6]->sprite, all->car_of[6]->position);
    sfSprite_setTextureRect(all->car_of[6]->sprite, all->car_of[6]->rect);
}

void move_car_seven_7(all_t *all, int *i, int *p)
{
    if (all->car_of[7]->position.y > 2240 &&
    all->car_of[7]->position.x <= 2400) {
        all->car_of[7]->rect.top = 320;
        all->car_of[7]->position.x += 2;
        *i = 1;
    } else if (all->car_of[7]->position.x >= 2400 &&
    all->car_of[7]->position.y >= 40 && *i == 1) {
        all->car_of[7]->rect.top = 480;
        all->car_of[7]->position.y -= 2;
        *p = 1;
    }
    if (all->car_of[7]->position.y <= 40 &&
    all->car_of[7]->position.x >= -200 && *p == 1) {
        all->car_of[7]->rect.top = 160;
        all->car_of[7]->position.x -= 2;
    }
}

void move_car_seven(all_t *all)
{
    static int i = 0;
    static int p = 0;
    if (all->car_of[7]->position.x <= 895 &&
    all->car_of[7]->position.y <= 2340 && p == 0) {
        all->car_of[7]->rect.top = 320;
        all->car_of[7]->position.x += 2;
    } else if (all->car_of[7]->position.x >= 895 &&
    all->car_of[7]->position.y <= 2240 && i == 0) {
        all->car_of[7]->rect.top = 0;
        all->car_of[7]->position.y += 2;
    } else
        move_car_seven_7(all, &i, &p);
    if (all->car_of[7]->position.x <= -201) {
        all->car_of[7]->position.x = -200;
        all->car_of[7]->position.y = 1480;
        i = 0;
        p = 0;
    }
    sfSprite_setPosition(all->car_of[7]->sprite, all->car_of[7]->position);
    sfSprite_setTextureRect(all->car_of[7]->sprite, all->car_of[7]->rect);
}
