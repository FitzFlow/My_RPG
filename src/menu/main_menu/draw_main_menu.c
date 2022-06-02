/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_main_menu
*/

#include "rpg.h"

void draw_button(all_t *all)
{
    draw_sprite(WINDOW,
    NEW_GAME_BTN->sprite, NULL);
    draw_sprite(WINDOW,
    CONTINUE_BTN->sprite, NULL);
    sfSprite_setPosition(BACK_BTN->sprite, v2f(490, 599));
    draw_sprite(WINDOW,
    QUIT_BTN->sprite, NULL);
}

void resize_draw(all_t *all)
{
    draw_sprite(WINDOW, all->menu->sky->sprite, NULL);
    draw_sprite(WINDOW, all->menu->road->sprite, NULL);
    draw_sprite(WINDOW, CLOUD->sprite, NULL);
    draw_sprite(WINDOW, CITY1->sprite, NULL);
    draw_sprite(WINDOW, CITY2->sprite, NULL);
    draw_sprite(WINDOW, CITY3->sprite, NULL);
    draw_sprite(WINDOW, CITY4->sprite, NULL);
    draw_sprite(WINDOW, all->cadre->sprite, NULL);
    draw_sprite(WINDOW, CREATOR->sprite, NULL);
}

void draw_selection_player(all_t *all)
{
    draw_sprite(WINDOW, all->select_player->charac_menu->sprite, NULL);
    draw_sprite(WINDOW, BACK_BTN->sprite, NULL);
    draw_sprite(WINDOW, PLAYER_CHOICE_BOY->sprite, NULL);
    draw_sprite(WINDOW, PLAYER_CHOICE_GIRL->sprite, NULL);
}

void move_menu_parallax(sfSprite *sprite, sfTexture *texture, sfIntRect *rect,
int left)
{
    if (!sprite || !texture || !left)
        return;
    (*rect).left += left;
    sfSprite_setTextureRect(sprite, *rect);
    sfTexture_setRepeated(texture, sfTrue);
}

void draw_main_menu(all_t *all)
{
    if (FIGHT->fight1 == in_fight || STATE_OF_GAME != main_menu)
        return;
    move_menu_parallax(CLOUD_S, CLOUD->texture, &CLOUD->rect, 1);
    move_menu_parallax(CITY1_S, CITY1->texture, &CITY1->rect, (int)1.75);
    move_menu_parallax(CITY2_S, CITY2->texture, &CITY2->rect, 2);
    move_menu_parallax(CITY3_S, CITY3->texture, &CITY3->rect, 3);
    move_menu_parallax(CITY4_S, CITY4->texture, &CITY4->rect, 4);
    move_menu_parallax(CREATOR_S, CREATOR->texture, &CREATOR->rect, 1);
    resize_draw(all);
    if (SELECT_PLAYER == none)
        draw_sprite(WINDOW, all->menu->key->sprite, NULL);
    if (SELECT_PLAYER != selection && SELECT_PLAYER != tuto) {
        draw_button(all);
        animate_menu_btn(all);
    }
    draw_selection_and_tuto(all);
}
