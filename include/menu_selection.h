/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** menu_selection
*/

#ifndef MENU_SELECTION_H_
    #define MENU_SELECTION_H_
    #include "all.h"

typedef enum character_selector {
    none,
    selection,
    tuto
}charac_selec_t;

typedef enum player_selection {
    p_none,
    player_girl,
    player_boy
} player_selection_t;

typedef struct select_player {
    entity_t *charac_menu;
    entity_t *player_choice_boy;
    entity_t *player_choice_girl;
    charac_selec_t character_menu;
} select_player_t;

#endif /* !MENU_SELECTION_H_ */
