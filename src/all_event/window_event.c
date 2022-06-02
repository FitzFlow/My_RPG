/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** window_event
*/

#include "rpg.h"

void move_pause_menu(all_t *all)
{
    PAUSE_TXT->rect.left += 1;
    sfSprite_setTextureRect(PAUSE_TXT->sprite, PAUSE_TXT->rect);
    sfTexture_setRepeated(PAUSE_TXT->texture, sfTrue);
}

void pause_sprite_pos(all_t *all)
{
    sfVector2f view = sfView_getCenter(all->view_player1);

    sfSprite_setPosition(PAUSE_MENU->sprite, POS_PAUSE_MENU);
    sfSprite_setPosition(PAUSE_BTN->sprite, POS_PAUSE_BTN);
    sfSprite_setPosition(PAUSE_TXT->sprite, POS_PAUSE_TXT);
    sfSprite_setPosition(PAUSE_CADRE->sprite, POS_PAUSE_CADRE);
    sfSprite_setPosition(all->RESUME_BUTTON->sprite, POS_RES_BTN);
    sfSprite_setPosition(all->SETTING_BUTTON->sprite, POS_SET_BTN);
    sfSprite_setPosition(all->MENU_BUTTON->sprite, POS_MAIN_BTN);
}

void hud_sprite_pos(all_t *all)
{
    sfVector2f view_pos = sfView_getCenter(all->view_player1);
    sfVector2f new_pos_inv = {view_pos.x + 240, view_pos.y + 210};
    sfVector2f new_pos_pause = {view_pos.x + 240, view_pos.y - 280};

    sfSprite_setPosition(INVENTORY->sprite, new_pos_inv);
    sfSprite_setPosition(PAUSE->sprite, new_pos_pause);
}

void reset_rect(sfSprite *sprite)
{
    sfIntRect rect = GET_RECT(sprite);
    rect.left = 0;
    sfSprite_setTextureRect(sprite, rect);
}

void init_view(all_t *all)
{
    sfVector2f pos = {0, 0};

    if ((STATE_OF_GAME == game && !all->view_player1) ||
    (STATE_OF_GAME == game && all->restart)) {
        all->restart = 0;
        pos = sfSprite_getPosition(all->player->sprite);
        pos.x += 50;
        pos.y += 50;
        all->view_player1 = my_create_view(WINDOW, pos, v2f(580, 590));
        sfRenderWindow_setView(WINDOW, all->view_player1);
        hud_sprite_pos(all);
        phone_sprite_pos(all);
        pause_sprite_pos(all);
    }
}
