/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** house
*/

#ifndef HOUSE_H_
    #define HOUSE_H_
    #include "all.h"

typedef enum interior_enum {
    player_house,
    other_house,
    in_city
} interior_enum_t;

typedef struct interior {
    entity_t *player_int;
    entity_t *player_int2;
    entity_t *other_int;
    entity_t *other_int2;
    entity_t *interact_e;
} interior_t;

#endif /* !HOUSE_H_ */
