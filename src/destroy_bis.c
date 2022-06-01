/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** destroy_bis.c
*/

#include "rpg.h"

void destroy_entity(entity_t *sprite)
{
    (sprite->sprite) ? sfSprite_destroy(sprite->sprite) : 0;
    (sprite->texture) ? sfTexture_destroy(sprite->texture) : 0;
    (sprite) ? free(sprite) : 0;
}

void destroy_entity_ptr(entity_t *sprite)
{
    if (!sprite)
        return;
    (sprite->sprite) ? sfSprite_destroy(sprite->sprite) : 0;
    (sprite->texture) ? sfTexture_destroy(sprite->texture) : 0;
    free(sprite);
}

void destroy_filter(filter_t *filter)
{
    if (!filter)
        return;
    (filter->filter) ? sfImage_destroy(filter->filter) : 0;
    (filter->filter_road) ? sfImage_destroy(filter->filter_road) : 0;
    free(filter);
}

void destroy_game(game_t *game)
{
    if (!game)
        return;
    destroy_entity(game->debug);
    destroy_entity(game->inventory);
    destroy_entity_ptr(game->map1);
    destroy_entity_ptr(game->map2);
    destroy_entity_ptr(game->map3);
    destroy_entity_ptr(game->map4);
    destroy_entity_ptr(game->map5);
    destroy_entity_ptr(game->map6);
    destroy_entity_ptr(game->map7);
    destroy_entity(game->pause);
    free(game);
}

void destroy_menu(menu_t *menu)
{
    if (!menu)
        return;
    destroy_entity(menu->city1);
    destroy_entity(menu->city2);
    destroy_entity(menu->city3);
    destroy_entity(menu->city4);
    destroy_entity(menu->cloud);
    destroy_entity(menu->creator);
    destroy_entity(menu->road);
    destroy_entity(menu->sky);
    free(menu);
}
