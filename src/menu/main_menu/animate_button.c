/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** interact_button
*/

#include "rpg.h"

void animate_button_fight(all_t *all, entity_t *sprite, int left)
{
    sfIntRect button_rect = sfSprite_getTextureRect(sprite->sprite);

    if (is_on_sprite(sprite->sprite, WINDOW)) {
        button_rect.left = left;
        sfSprite_setTextureRect(sprite->sprite, button_rect);
    } else {
        button_rect.left = 0;
        sfSprite_setTextureRect(sprite->sprite, button_rect);
    }
}

void animate_button(all_t *all, entity_t *sprite, int left,
sfVector2f pos)
{
    sfIntRect button_rect = sfSprite_getTextureRect(sprite->sprite);

    if (is_on_sprite(sprite->sprite, WINDOW)) {
        sprite->size = V2F(1.10, 1.10);
        button_rect.left = left;
        sfSprite_setScale(sprite->sprite, sprite->size);
        sfSprite_setTextureRect(sprite->sprite, button_rect);
        sfSprite_setPosition(sprite->sprite, pos);
    } else {
        sprite->size = V2F(1, 1);
        button_rect.left = 0;
        sfSprite_setScale(sprite->sprite, sprite->size);
        sfSprite_setTextureRect(sprite->sprite, button_rect);
        sfSprite_setPosition(sprite->sprite, V2F(pos.x + 10, pos.y + 10));
    }
}

void animate_button_hud(all_t *all, sfVector2f *pos_size, entity_t *sprite,
int left)
{
    sfIntRect button_rect = sfSprite_getTextureRect(sprite->sprite);

    if (is_on_square_sprite_hud(WINDOW, pos_size[0], pos_size[1])) {
        sprite->size = V2F(0.6, 0.9);
        button_rect.left = left;
        sfSprite_setScale(sprite->sprite, sprite->size);
        sfSprite_setTextureRect(sprite->sprite, button_rect);
        sfSprite_setPosition(sprite->sprite, pos_size[2]);
    } else {
        sprite->size = V2F(0.5, 0.8);
        button_rect.left = 0;
        sfSprite_setScale(sprite->sprite, sprite->size);
        sfSprite_setTextureRect(sprite->sprite, button_rect);
        sfSprite_setPosition(sprite->sprite,
        V2F(pos_size[2].x + 10, pos_size[2].y + 10));
    }
}

void animate_menu_btn(all_t *all)
{
    animate_button(all, CONTINUE_BTN, 277, V2F(480, 424));
    animate_button(all, NEW_GAME_BTN, 277, V2F(480, 517));
    animate_button(all, QUIT_BTN, 277, V2F(480, 612));
}
