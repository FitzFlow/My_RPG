/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** create_clock
*/
#include "pnj.h"
#include <stdlib.h>

my_clock_t *create_clock(void)
{
    my_clock_t *clock = NULL;
    clock = malloc(sizeof(my_clock_t));

    if (!clock)
        return NULL;
    clock->clock = sfClock_create();
    clock->seconds = 0;
    return clock;
}
