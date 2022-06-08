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
        return v2f(0, 0);
    sfVector2f center = sfView_getCenter(all->view_player1);
    char const *str = sfText_getString(text);

    center.y += 250;
    center.x -= (my_strlen(str) * 2.5);
    if (!all->INTERACT_E_S)
        return center;
    sfSprite_setPosition(all->INTERACT_E_S, v2f(center.x - 30, center.y));
    return center;
}

void draw_my_npc(all_t *all, npc_t *pnj)
{
    if (!GET_POS_S(PNJ_S).x && !GET_POS_S(PNJ_S).y)
        return;
    draw_sprite(WINDOW, PNJ_S, NULL);
    if (pnj->i == 0)
        TEXT = create_text((*pnj->dialog)[pnj->i], 15, FONT, sfBlack);
    if (dist_btw_sprite(PNJ_S, PLAYER_S) <= DIST_INTERACTION && TEXT &&
    MISSION != m_animation) {
        sfText_setPosition(TEXT, get_pos_dialog(all, TEXT));
        draw_sprite(WINDOW, all->INTERACT_E_S, NULL);
        draw_text(WINDOW, TEXT, NULL);
    }
}
