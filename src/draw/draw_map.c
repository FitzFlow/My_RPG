/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_map
*/
#include "rpg.h"

void draw_map_behind(all_t *all)
{
    draw_sprite(WINDOW, all->game->map1->sprite, NULL);
    draw_sprite(WINDOW, all->game->map2->sprite, NULL);
    draw_sprite(WINDOW, all->game->map3->sprite, NULL);
}

void draw_map_in_front_of(all_t *all)
{
    draw_sprite(WINDOW, all->game->map4->sprite, NULL);
    draw_sprite(WINDOW, all->game->map5->sprite, NULL);
    draw_sprite(WINDOW, all->game->map6->sprite, NULL);
    draw_sprite(WINDOW, all->game->map7->sprite, NULL);
}
