/*
** EPITECH PROJECT, 2021
** delivry
** File description:
** my_put_nbr
*/
#include <stdio.h>

void my_putchar(char);

void my_putstr(char *);

void my_put_nbr(long int nb)
{
    int i = 1;

    if (nb == 0) {
        my_putstr("0");
        return;
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    for (;nb / i >= 10; i *= 10);
    for (;i != 0; nb %= i, i /= 10)
        my_putchar((nb / i) + 48);
}
