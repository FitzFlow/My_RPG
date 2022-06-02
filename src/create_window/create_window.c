/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_window
*/

#include "rpg.h"

window_t *init_window(void)
{
    window_t *window = malloc(sizeof(window_t));
    window->mode = (sfVideoMode){1280, 720, 64};
    window->window =
    sfRenderWindow_create(window->mode, "My_rpg", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
    return (window);
}
