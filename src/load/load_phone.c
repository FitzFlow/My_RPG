/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_phone
*/
#include "rpg.h"

void load_phone(all_t *all)
{
    PHONE = malloc(sizeof(phone_t));

    if (!PHONE)
        return;
    PHONE->sprite = init_entity(PHONE_T, &V2F(700, 293), NULL);
    PHONE->sprite->size = V2F(0.7, 1);
    PHONE->sprite->position.x = all->player->position.x + 100;
    PHONE->sprite->position.y = all->player->position.y + 500;
    sfSprite_setPosition(PHONE->sprite->sprite, PHONE->sprite->position);
    sfSprite_setScale(PHONE->sprite->sprite, PHONE->sprite->size);
}
