/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_game
*/
#include "rpg.h"

void load_map(all_t *all)
{
    all->game->map1 = init_map(MAP1, NULL, NULL);
    all->game->map2 = init_map(MAP2, NULL, NULL);
    all->game->map3 = init_map(MAP3, NULL, NULL);
    all->game->map4 = init_map(MAP4, NULL, NULL);
    all->game->map5 = init_map(MAP5, NULL, NULL);
    all->game->map6 = init_map(MAP6, NULL, NULL);
    all->game->map7 = init_map(MAP7, NULL, NULL);
    all->game->mini_map = init_entity(MIN_MAP_BG, NULL, NULL);
    sfSprite_scale(all->game->mini_map->sprite, v2f(0.42, 0.8));
    all->game->debug = init_entity(COLLISION, NULL, NULL);
}

void load_game(all_t *all)
{
    all->player = init_player();
    all->game = malloc(sizeof(game_t));
    if (!all->game)
        return;
    load_map(all);
    PAUSE = init_entity(HUD_PAUSE, &v2f(1200, 6), &I_RECT(0, 0, 143, 137));
    sfSprite_setScale(PAUSE->sprite, v2f(0.3, 0.5));
    INVENTORY = init_entity(HUD_INV, &v2f(1200, 645), &I_RECT(0, 0, 143, 137));
    sfSprite_setScale(INVENTORY->sprite, v2f(0.3, 0.5));
    all->view_game = my_create_view(WINDOW,
    GET_POS_S(PLAYER_S), v2f(1000, 1000));
    all->view_player1 = NULL;
    all->restart = 0;
    load_phone(all);
    load_car(all);
}
