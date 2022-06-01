/*
** EPITECH PROJECT, 2021
** nbr_to_char.c
** File description:
** my_nbr_to char
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char);

int my_putstr(char const *str);

int my_printf(const char *format, ...);

int len_nb2(int nb)
{
    int nblong = 1;

    if (nb < 0)
        nb = (nb * -1);
    while (nb >= 10) {
        nb = nb / 10;
        nblong = nblong * 10;
    }
    return (nblong);
}

char *my_nbr_to_char(int nb)
{
    int nblen = len_nb2(nb);
    char *stock = NULL;
    int cpt = 0;

    if (nb < 0) {
        nb = nb * -1;
        stock = malloc(sizeof(char) * (nblen + 2));
        stock[cpt] = '-';
        cpt++;
    } else
        stock = malloc(sizeof(char) * (nblen + 1));
    while (nblen >= 1) {
        stock[cpt] = (nb / nblen) + 48;
        nb = nb % nblen;
        nblen = nblen / 10;
        cpt++;
    }
    return (stock);
}
