/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_phone
*/
#include "rpg.h"

void draw_phone(all_t *all)
{
    if (IN_PHONE || PHONE_END_ANIMATION || PHONE_ANIMATION)
        draw_sprite(WINDOW, PHONE->sprite->sprite, NULL);
    else if (all->state_of_game == game && NOT_IN_PAUSE)
        draw_sprite(WINDOW, INVENTORY->sprite, NULL);
}
