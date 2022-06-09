/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** set_game_in_pause
*/

#include "rpg.h"

void set_in_pause(all_t *all)
{
    if (MISSION == m_animation)
        return;
    if (((CLICK && MOUSE(sfMouseLeft)) || (KEY_RELEASE && KEY(sfKeyEscape))) &&
    NOT_IN_PAUSE && FIGHT->fight1 != in_fight) {
        if (is_on_sprite_hud(WINDOW, 48, v2f(1217, 58)) || KEY(sfKeyEscape))
            all->game_pause = in_pause;
    } else if (IN_PAUSE && KEY_RELEASE && KEY(sfKeyEscape))
        all->game_pause = not_in_pause;
}

void set_in_inventory(all_t *all)
{
    sfVector2f player_pos = {0, 0};

    if (NOT_IN_PAUSE && NOT_IN_PHONE && ((KEY_RELEASE && KEY(sfKeyI)) ||
    (CLICK && MOUSE(LEFT) && is_on_sprite_hud(WINDOW, 48, v2f(1217, 666)))))
        PHONE_MODE = animation;
    else if ((IN_PHONE && KEY_RELEASE && KEY(sfKeyI)) || IN_PAUSE) {
        PHONE_MODE = end_animation;
    }
    if (PHONE_MODE == not_in_phone && all->view_player1) {
        player_pos = sfView_getCenter(all->view_player1);
        PHONE->sprite->position.y = player_pos.y + 290;
        PHONE->sprite->position.x = player_pos.x + 165;
        sfSprite_setPosition(PHONE->sprite->sprite, PHONE->sprite->position);
    }
}
