/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** interact_pause_button
*/

#include "rpg.h"

void interact_grown_button(all_t *all)
{
    sfVector2f center = sfView_getCenter(all->view_player1);
    sfVector2f pos[3] = {v2f(0, 0), v2f(0, 0), v2f(0, 0)};

    pos[0] = v2f(492, 203);
    pos[1] = v2f(290, 74);
    pos[2] = v2f(center.x - 80, center.y - 135);
    animate_button_hud(all, pos, all->menu_pause->resume_button, 272);
    pos[0] = v2f(492, 350);
    pos[2] = v2f(center.x - 80, center.y - 25);
    animate_button_hud(all, pos, all->menu_pause->setting_button, 272);
    pos[0] = v2f(492, 480);
    pos[2] = v2f(center.x - 80, center.y + 85);
    animate_button_hud(all, pos, all->menu_pause->menu_button, 272);
}
