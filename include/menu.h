/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_
    #include "all.h"

typedef struct menu_btn {
    entity_t *continue_btn;
    entity_t *new_game_btn;
    entity_t *quit_button;
    entity_t *back_button;
} menu_btn_t;

typedef struct menu {
    entity_t *creator;
    entity_t *map;
    entity_t *sky;
    entity_t *road;
    entity_t *cloud;
    entity_t *city1;
    entity_t *city2;
    entity_t *city3;
    entity_t *city4;
    entity_t *key;
    entity_t *tuto_key;
} menu_t;

void destroy_menu(menu_t *menu);

#endif /* !MENU_H_ */
