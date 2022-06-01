/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_pnj
*/
#include "rpg.h"

void draw_pnj_behind(all_t *all)
{
    for (mob_t *pnj = all->pnj; pnj; pnj = pnj->next)
        if (pnj->view == 0)
            draw_sprite(WINDOW, pnj->pnj->sprite, NULL);
}

void draw_pnj_front(all_t *all)
{
    for (mob_t *pnj = AROUND; pnj; pnj = pnj->next)
        if (pnj->view == 1)
            draw_sprite(WINDOW, pnj->pnj->sprite, NULL);
}

sfVector2f get_pos_dialog(all_t *all, sfText *text)
{
    if (!text)
        return V2F(0, 0);
    sfVector2f center = sfView_getCenter(all->view_player1);
    char const *str = sfText_getString(text);

    center.y += 250;
    center.x -= (my_strlen(str) * 2.5);
    if (!all->INTERACT_E_S)
        return center;
    sfSprite_setPosition(all->INTERACT_E_S, V2F(center.x - 30, center.y));
    return center;
}

void draw_my_npc(all_t *all, mob_t *pnj)
{
    if (!GET_POS_S(PNJ_S).x && !GET_POS_S(PNJ_S).y)
        return;
    draw_sprite(WINDOW, PNJ_S, NULL);
    if (dist_btw_sprite(PNJ_S, PLAYER_S) <= DIST_INTERACTION) {
        (ID_TEXT) ? sfText_setPosition(ID_TEXT, GET_POS_S(PNJ_S)) : 0;
        (TEXT) ? sfText_setPosition(TEXT, get_pos_dialog(all, TEXT)) : 0;
        (TEXT && my_strcmp(sfText_getString(TEXT), "/")) ?
        draw_sprite(WINDOW, all->INTERACT_E_S, NULL) : 0;
        draw_text(WINDOW, TEXT, NULL);
        draw_text(WINDOW, ID_TEXT, NULL);
    }
}

void draw_npc(all_t *all)
{
    for (mob_t *pnj = all->npc; pnj; pnj = pnj->next) {
        if (my_strcmp(pnj->id, "Big SMOKE") &&
        my_strcmp(pnj->id, "Freeze CORLEONE"))
            draw_my_npc(all, pnj);
    }
}