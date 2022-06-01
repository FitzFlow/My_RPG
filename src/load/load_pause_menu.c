/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** load_pause_menu
*/
#include "rpg.h"

void load_button_menu_pause(all_t *all)
{
    all->RESUME_BUTTON = init_entity(RESUME_BTN, NULL,
    &I_RECT(0, 0, 272, 82));
    all->SETTING_BUTTON = init_entity(EXIT_BTN, NULL,
    &I_RECT(0, 0, 272, 82));
    all->MENU_BUTTON = init_entity(SETTING_BTN, NULL,
    &I_RECT(0, 0, 272, 82));
    all->RESUME_BUTTON->size = V2F(0.5, 0.8);
    sfSprite_setScale(all->RESUME_BUTTON->sprite, all->RESUME_BUTTON->size);
    all->SETTING_BUTTON->size = V2F(0.5, 0.8);
    sfSprite_setScale(all->SETTING_BUTTON->sprite, all->SETTING_BUTTON->size);
    all->MENU_BUTTON->size = V2F(0.5, 0.8);
    sfSprite_setScale(all->MENU_BUTTON->sprite, all->MENU_BUTTON->size);
}

void load_pause_menu(all_t *all)
{
    all->menu_pause = malloc(sizeof(menu_pause_t));

    PAUSE_BTN = init_entity(PAUSE_BUTTON_T, NULL, NULL);
    PAUSE_CADRE = init_entity(PAUSE_CADRE_T, NULL, NULL);
    PAUSE_MENU = init_entity(PAUSE_MENU_T, NULL, NULL);
    PAUSE_TXT = init_entity(PAUSE_TXT_T, NULL, &I_RECT(0, 0, 257, 90));

    PAUSE_MENU->size = V2F(0.6, 0.9);
    sfSprite_setScale(PAUSE_MENU->sprite, PAUSE_MENU->size);
    PAUSE_BTN->size = V2F(0.5, 0.8);
    sfSprite_setScale(PAUSE_BTN->sprite, PAUSE_BTN->size);
    PAUSE_TXT->size = V2F(0.5, 0.5);
    sfSprite_setScale(PAUSE_TXT->sprite, PAUSE_TXT->size);
    PAUSE_CADRE->size = V2F(0.5, 0.7);
    sfSprite_setScale(PAUSE_CADRE->sprite, PAUSE_CADRE->size);
    load_button_menu_pause(all);
}
