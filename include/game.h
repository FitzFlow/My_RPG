/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_
    #include "all.h"

typedef enum state_game {
    main_menu,
    test,
    game
} game_state_t;

typedef struct game {
    entity_t *map1;
    entity_t *map2;
    entity_t *map3;
    entity_t *map4;
    entity_t *map5;
    entity_t *map6;
    entity_t *map7;
    entity_t *debug;
    entity_t *pause;
    entity_t *inventory;
    entity_t *mini_map;
} game_t;

typedef struct filter {
    sfImage *filter;
    sfImage *filter_road;
    sfImage *filter_player_house;
    sfImage *filter_other_house;
} filter_t;

void destroy_game(game_t *game);
void destroy_filter(filter_t *filter);

entity_t *init_map(const char *texture, sfVector2f *position, sfIntRect *rect);

#endif /* !GAME_H_ */
