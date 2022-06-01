/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** phone_animation
*/

#include "rpg.h"

void phone_animation(all_t *all)
{
    if (!all->view_player1 || !PHONE->sprite->sprite)
        return;
    sfVector2f view = sfView_getCenter(all->view_player1);
    sfVector2f phone_pos = sfSprite_getPosition(all->phone->sprite->sprite);

    if (PHONE_ANIMATION && phone_pos.y <= view.y - 15)
        PHONE_MODE = in_phone;
    if (PHONE_ANIMATION && phone_pos.y > view.y - 15) {
        phone_pos.y -= 10;
        sfSprite_setPosition(PHONE->sprite->sprite, phone_pos);
    }
    if (PHONE_END_ANIMATION && phone_pos.y >= view.y + 300)
        PHONE_MODE = not_in_phone;
    if (PHONE_END_ANIMATION && phone_pos.y < view.y + 300) {
        phone_pos.y += 10;
        sfSprite_setPosition(PHONE->sprite->sprite, phone_pos);
    }
}

void phone_sprite_pos(all_t *all)
{
    sfVector2f player_pos = sfView_getCenter(all->view_player1);
    sfVector2f phone_pos = {player_pos.x + 165, 0};

    phone_pos.y = sfSprite_getPosition(all->phone->sprite->sprite).y;
    if (IN_PHONE)
        phone_pos.y = player_pos.y - 20;
    sfSprite_setPosition(PHONE->sprite->sprite, phone_pos);
}
