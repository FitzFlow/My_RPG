/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** change_player_dress
*/

#include "rpg.h"

void change_boy(all_t *all)
{
    if (!PLAYER->sprite)
        return;
    const char *dress[4] = {PLAYER_BOY, PLAYER_BOY_BLUE, PLAYER_BOY_PINK,
    PLAYER_BOY_RED};
    int nb = 0;
    sfTexture *texture;
    sfIntRect rect;

    srand(random_number());
    nb = rand() % 4;
    texture = sfTexture_createFromFile(dress[nb], NULL);
    if (KEY_RELEASE && all->window->event.key.code == sfKeyE) {
        rect = sfSprite_getTextureRect(all->player->sprite);
        sfSprite_setTexture(all->player->sprite, texture, sfTrue);
        sfSprite_setTextureRect(all->player->sprite, rect);
        return;
    }
}

void change_girl(all_t *all)
{
    if (!PLAYER->sprite)
        return;
    const char *dress[3] = {GIRL_DBLUE, PLAYER_GIRL_BLUE,
    PLAYER_GIRL_RED};
    int nb = 0;
    sfTexture *texture;
    sfIntRect rect;

    srand(random_number());
    nb = rand() % 3;
    texture = sfTexture_createFromFile(dress[nb], NULL);
    if (KEY_RELEASE && all->window->event.key.code == sfKeyE) {
        rect = sfSprite_getTextureRect(all->player->sprite);
        sfSprite_setTexture(all->player->sprite, texture, sfTrue);
        sfSprite_setTextureRect(all->player->sprite, rect);
        return;
    }
}

void change_dress(all_t *all)
{
    if (FIGHT->play_selection == player_boy) {
        sfVector2f pos = sfSprite_getPosition(all->player->sprite);
        if (pos.x > 2135 && pos.x < 2185 && pos.y > 983 && pos.y < 992)
            change_boy(all);
    }
    if (FIGHT->play_selection == player_girl) {
        sfVector2f pos = sfSprite_getPosition(all->player->sprite);
        if (pos.x > 2135 && pos.x < 2185 && pos.y > 983 && pos.y < 992)
            change_girl(all);
    }
}

void draw_dress_interaction(all_t *all)
{
    sfSprite_setPosition(all->interior.interact_e->sprite,
    (sfVector2f){2210, 985});
    draw_sprite(WINDOW, all->interior.interact_e->sprite, NULL);
}

void change_player_dress(all_t *all)
{
    if (all->state_of_game != game)
        return;
    sfVector2f pos = sfSprite_getPosition(all->player->sprite);

    if (pos.x > 2135 && pos.x < 2185 && pos.y > 983 && pos.y < 992)
        draw_dress_interaction(all);
}
