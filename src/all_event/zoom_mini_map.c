/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** zoom_mini_map
*/
#include "rpg.h"

void zoom_mini_map(all_t *all)
{
    int delta = 0;
    sfVector2f size = {0, 0};
    sfVector2f new = {0, 0};

    if (sfEvtMouseWheelScrolled) {
        delta = all->window->event.mouseWheelScroll.delta;
        size = sfView_getSize(all->view_game);
        new = v2f(size.x + (delta * 10), size.y + (delta * 10));
        sfView_setSize(all->view_game, new);
    }
}
