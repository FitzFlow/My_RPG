/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_view
*/
#include "rpg.h"

sfView *my_create_view(sfRenderWindow *window, sfVector2f pos,
sfVector2f size)
{
    sfView *view = sfView_create();
    (void)window;

    sfView_setCenter(view, pos);
    sfView_setSize(view, size);
    return view;
}
