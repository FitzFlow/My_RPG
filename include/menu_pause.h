/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** menu_pause
*/

#ifndef MENU_PAUSE_H_
    #define MENU_PAUSE_H_
    #include "all.h"

typedef enum pause_game {
    in_pause,
    not_in_pause
} pause_game_t;

typedef struct menu_pause {
    entity_t *pause_menu;
    entity_t *pause_btn;
    entity_t *pause_cadre;
    entity_t *pause_txt;
    entity_t *resume_button;
    entity_t *menu_button;
    entity_t *setting_button;
} menu_pause_t;

void destroy_menu_pause(menu_pause_t *menu_pause);

#endif /* !MENU_PAUSE_H_ */
