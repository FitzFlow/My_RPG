/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday04-idriss.said
** File description:
** my_getnbr
*/
#include "my.h"

int getnbr_is_num(char c)
{
    if ((c >= '0' && c <= '9') || c == '-' || c == '+')
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    int nb = 0;

    if (!str)
        return 0;
    for (int i = 0; getnbr_is_num(str[i]); i++) {
        for (; str[i] == '-' || str[i] == '+'; i++);
        if (is_num(str[i]))
            nb = (nb * 10) + (str[i] - 48);
    }
    if (my_str_is_neg(str) != 0)
        nb *= -1;
    return nb;
}
