/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** enter_in_house
*/

#include "rpg.h"

void draw_for_city(all_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprite);

    if (player_pos.x > 2110 && player_pos.x < 2170 &&
    player_pos.y >= 1015 && player_pos.y < 1037) {
        sfSprite_setPosition(all->interior.interact_e->sprite,
        (sfVector2f){2210, 1005});
        draw_sprite(WINDOW, all->interior.interact_e->sprite, NULL);
    }
    if (player_pos.x > 2000 && player_pos.x < 2055 &&
    player_pos.y > 2575 && player_pos.y < 2600) {
        sfSprite_setPosition(all->interior.interact_e->sprite,
        (sfVector2f){1995, 2595});
        draw_sprite(WINDOW, all->interior.interact_e->sprite, NULL);
    }
}

void draw_interaction_player_house(all_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprite);

    if (all->interior_enum == in_city)
        draw_for_city(all);
    else
        resize_interaction(all, player_pos);
}

void interact_for_city(all_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprite);

    if (player_pos.x > 2110 && player_pos.x < 2170
    && player_pos.y > 1025 && player_pos.y < 1037)
        if (KEY_RELEASE && KEY(sfKeyE))
            all->interior_enum = player_house;
    if (player_pos.x > 2000 && player_pos.x < 2055 &&
    player_pos.y > 2575 && player_pos.y < 2600)
        if (KEY_RELEASE && KEY(sfKeyE))
            all->interior_enum = other_house;
}

void interact_for_player_house(all_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprite);

    if (player_pos.x > 2015 && player_pos.x < 2080 &&
        player_pos.y > 2500 && player_pos.y < 2545) {
        if (KEY_RELEASE && KEY(sfKeyE)) {
            sfSprite_setPosition(all->player->sprite,
            (sfVector2f){2030, 2595});
            sfSprite_setPosition(all->interior.interact_e->sprite,
            (sfVector2f){2210, 1005});
            all->interior_enum = in_city;
        }
    }
}

void interact_with_player_house(all_t *all)
{
    sfVector2f player_pos = sfSprite_getPosition(all->player->sprite);

    if (all->interior_enum == in_city)
        interact_for_city(all);
    else if (all->interior_enum == player_house)
        interact_with_player_house_resize(all, player_pos);
    if (all->interior_enum == other_house)
        interact_for_player_house(all);
}
