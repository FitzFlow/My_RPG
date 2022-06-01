/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-bsmyls-florian.etheve
** File description:
** print_tab
*/

#include "my.h"
#include <stdlib.h>

void print_tab_char(char **tab)
{
    int word = 0;

    while (tab[word] != NULL) {
        my_putstr(tab[word]);
        word++;
    }
    my_putchar('\n');
}
