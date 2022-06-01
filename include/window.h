/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** window
*/

#ifndef WINDOW_H_
    #define WINDOW_H_
    #include "all.h"

typedef struct window {
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;
} window_t;

window_t *init_window(void);

#endif /* !WINDOW_H_ */
