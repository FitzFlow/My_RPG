/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** error_case_printf
*/
#include "my_printf.h"
#include <unistd.h>

int display_modulo(char *str, int *i)
{
    int o = 0;

    for (; str[*i] && str[*i] == '%'; o++, *i += 1)
        if (o % 2 == 0 && str[*i + 1] &&
        !is_flags(&str[*i + 1]) && str[*i + 1] != '.')
            write(1, "%", 1);
    if (o % 2 == 0)
        return 1;
    return 0;
}

int error_case(char *str)
{
    if (str == NULL) {
        write(1, "(null)\n", 8);
        return 0;
    }
    return 0;
}

int error_case_modulo(char *str)
{
    int nb_modulo = 0;

    for (int i = 0; str[i]; i++) {
        for (nb_modulo = 0; str[i] && str[i] == '%'; i++, nb_modulo++);
        if (i > 0 && str[i - 1] == '%' && is_flags(&str[i]))
            nb_modulo--;
        if (nb_modulo > 0 && nb_modulo % 2 == 1)
            return 1;
    }
    return 0;
}
