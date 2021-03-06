/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** movement2
*/

#include "rpg.h"

void move_view_game(all_t *all, sfVector2f pos, int x, int y)
{
    if (!all->view_game)
        return;
    if ((pos.x + x >= 510 && pos.x + x <= 2700 && !y) ||
    (pos.y + y >= 495 && pos.y + y <= 2705 && !x))
        sfView_move(all->view_game, v2f(x, y));
}

void move(all_t *all, int x, int y)
{
    sfVector2f pos = GET_POS_S(PLAYER_S);

    if ((pos.x + x >= 250 && pos.x + x <= 2780 && !y) ||
    (pos.y + y >= 250 && pos.y + y <= 2840 && !x)) {
        if (all->interior_enum == in_city) {
            sfView_move(all->view_player1, v2f(x, y));
            move_view_game(all, pos, x, y);
        }
        hud_sprite_pos(all);
        phone_sprite_pos(all);
        pause_sprite_pos(all);
    }
    sfSprite_move(all->player->sprite, v2f(x, y));
    sfRenderWindow_setView(WINDOW, all->view_player1);
}

void game_collision(all_t *all, sfImage *img)
{
    sfVector2f pos = GET_POS_S(PLAYER_S);

    if (!check_collision_right(pos, img, &all->change_draw,
    &DEBUG->all_debug[0]) && TOUCH(sfKeyD))
        move(all, PLAYER->speed, 0);
    if (!check_collision_left(pos, img, &all->change_draw,
    &DEBUG->all_debug[0]) && TOUCH(sfKeyQ))
        move(all, PLAYER->speed * -1, 0);
    if (!check_collision_down(pos, img, &all->change_draw,
    &DEBUG->all_debug[0]) && TOUCH(sfKeyS))
        move(all, 0, PLAYER->speed);
    if (!check_collision_up(pos, img, &all->change_draw,
    &DEBUG->all_debug[0]) && TOUCH(sfKeyZ))
        move(all, 0, PLAYER->speed * -1);
}
