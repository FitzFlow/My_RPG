/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday05-idriss.said
** File description:
** my_compute_factorial_it
*/
#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int i = 1;

    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    if (nb > 12)
        return (0);
    for (; nb != 1; i *= nb, nb--);
    return (i);
}
