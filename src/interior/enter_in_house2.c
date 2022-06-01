/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** enter_in_house2
*/

#include "rpg.h"

void interact_with_player_house_resize(all_t *all, sfVector2f player_pos)
{
    if (player_pos.x > 2060 && player_pos.x < 2096 &&
    player_pos.y > 963 && player_pos.y < 975) {
        if (KEY_RELEASE && KEY(sfKeyE)) {
            sfSprite_setPosition(all->player->sprite,
            (sfVector2f){2140, 1035});
            sfSprite_setPosition(all->interior.interact_e->sprite,
            (sfVector2f){2210, 1005});
            all->interior_enum = in_city;
        }
    }
}

void resize_interaction(all_t *all, sfVector2f player_pos)
{
    if (all->interior_enum == player_house) {
        if (player_pos.x > 2060 && player_pos.x < 2096 &&
        player_pos.y > 963 && player_pos.y < 975) {
            sfSprite_setPosition(all->interior.interact_e->sprite,
            (sfVector2f){2075, 1005});
            draw_sprite(WINDOW, all->interior.interact_e->sprite, NULL);
        }
    }
    if (all->interior_enum == other_house) {
        if (player_pos.x > 2015 && player_pos.x < 2080 &&
        player_pos.y > 2500 && player_pos.y < 2545) {
            sfSprite_setPosition(all->interior.interact_e->sprite,
            (sfVector2f){2010, 2550});
            draw_sprite(WINDOW, all->interior.interact_e->sprite, NULL);
        }
    }
}
