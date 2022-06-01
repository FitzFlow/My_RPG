/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** destroy_cis.c
*/

#include "rpg.h"

void destroy_my_music(my_music_t music)
{
    (music.music) ? sfMusic_destroy(music.music) : 0;
}

void destroy_menu_pause(menu_pause_t *menu_pause)
{
    if (!menu_pause)
        return;
    destroy_entity(menu_pause->pause_btn);
    destroy_entity(menu_pause->pause_cadre);
    destroy_entity(menu_pause->pause_menu);
    destroy_entity(menu_pause->pause_txt);
    free(menu_pause);
}

void destroy_pnj(pnj_t *pnj)
{
    if (!pnj)
        return;
    (pnj->sprite) ? sfSprite_destroy(pnj->sprite) : 0;
    (pnj->clock && pnj->clock->clock) ? sfClock_destroy(pnj->clock->clock) : 0;
    (pnj->clock) ? free(pnj->clock) : 0;
    free(pnj);
}

void destroy_mob(mob_t *mob)
{
    mob_t *tmp = NULL;

    for (; mob;) {
        tmp = mob;
        mob = mob->next;
        destroy_pnj(tmp->pnj);
    }
}

void destroy_phone(phone_t *phone)
{
    if (!phone)
        return;
    destroy_entity(phone->sprite);
    free(phone);
}
