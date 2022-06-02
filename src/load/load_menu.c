/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_menu
*/
#include "rpg.h"

void load_menu_btn(all_t *all)
{
    all->menu_btn = malloc(sizeof(menu_btn_t));

    NEW_GAME_BTN = init_entity(NEW_GAME_BTN_T, &v2f(490, 527),
    &I_RECT(0, 0, 278, 75));
    CONTINUE_BTN = init_entity(CONTINUE_BTN_T, &v2f(490, 434),
    &I_RECT(0, 0, 278, 75));
    QUIT_BTN = init_entity(QUIT_BTN_T, &v2f(490, 622), &I_RECT(0, 0, 278, 75));
    BACK_BTN = init_entity(BACK_BTN_T, &v2f(490, 599), &I_RECT(0, 0, 278, 75));
}

void load_menu(all_t *all)
{
    all->menu = malloc(sizeof(menu_t));

    if (!all->menu)
        return;
    all->menu->sky = init_entity(SKY, NULL, NULL);
    all->menu->road = init_entity(ROAD, NULL, NULL);
    CLOUD = init_entity(CLOUD_T, NULL, &I_RECT(0, 0, 1280, 720));
    CITY1 = init_entity(CITY1_T, NULL, &I_RECT(0, 0, 1280, 720));
    CITY2 = init_entity(CITY2_T, NULL, &I_RECT(0, 0, 1280, 720));
    CITY3 = init_entity(CITY3_T, NULL, &I_RECT(0, 0, 1280, 720));
    CITY4 = init_entity(CITY4_T, NULL, &I_RECT(0, 0, 1280, 720));
    CREATOR = init_entity(CREATOR_T, &v2f(1118, 571), &I_RECT(0, 0, 78, 84));
    load_menu_btn(all);
    load_player_menu(all);
    all->menu_music = init_music(MENU_MUSIC);
    play_music(all);
    all->menu->key = init_entity(KEY_BTN, &v2f(92, 585), NULL);
    all->menu->tuto_key = init_entity(KEY_INTERFACE, NULL, NULL);
}
