/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_text
*/

#include "rpg.h"

void drax_text_fight(all_t *all)
{
    if (FIGHT->fight1 == in_fight) {
        sfText_setString(FIGHT->fight_text.text_pv,
        my_nbr_to_string(all->player->pv));
        sfText_setString(FIGHT->fight_text.ennemy_pv,
        my_nbr_to_string(FIGHT->ennemy.pv));
        sfRenderWindow_drawText(WINDOW, FIGHT->fight_text.text, NULL);
        sfRenderWindow_drawText(WINDOW, FIGHT->fight_text.text_pv, NULL);
        sfRenderWindow_drawText(WINDOW, FIGHT->fight_text.ennemy, NULL);
        sfRenderWindow_drawText(WINDOW, FIGHT->fight_text.ennemy_pv, NULL);
    }
}
