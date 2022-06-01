/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday08-idriss.said
** File description:
** my_nbr_to_string
*/
#include <stdlib.h>
#include "my_printf.h"

char *my_unsigned_nbr_to_string(unsigned int nb)
{
    int len = my_unsigned_lennb(nb);
    char *str = malloc(sizeof(int) + (len + 1));
    int un = 1;
    int i = 0;

    for (; nb / un >= 10; un *= 10);
    for (; un != 0; i++, nb %= un, un /= 10)
        str[i] = (nb / un) + 48;
    str[len] = '\0';
    return (str);
}
