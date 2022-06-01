/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday08-idriss.said
** File description:
** my_nbr_to_string
*/
#include <stdlib.h>

int my_lennb(int nb)
{
    int un = 1;
    int len = 0;

    if (nb < 0) {
        nb *= -1;
        len++;
    }
    for (; nb / un >= 10; un *= 10, len++);
    return len + 1;
}

char *my_nbr_to_string(int nb)
{
    int len = my_lennb(nb);
    char *str = malloc(sizeof(int) + (len + 1));
    int un = 1;
    int i = 0;

    if (nb < 0) {
        nb *= -1;
        str[i] = '-';
        i++;
    }
    for (; nb / un >= 10; un *= 10);
    for (; un != 0; i++, nb %= un, un /= 10)
        str[i] = (nb / un) + 48;
    str[len] = '\0';
    return (str);
}
