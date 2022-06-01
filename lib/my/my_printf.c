/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/
#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"

int is_point(char c, int *n)
{
    if (c == '.') {
        *n += 1;
        return -1;
    }
    return 1;
}

int *get_format(int *nb, char *str, int *n)
{
    int *format = malloc(sizeof(int) * 3);

    format[0] = my_getnbr(&str[*n]);
    if (str[*n] == '+')
        format[2] = 1;
    else
        format[2] = 0;
    if (str[*n] == '#')
        format[2] = 3;
    for (*nb = 0; str[*n] && is_num(str[*n]); *nb += 1, *n += 1);
    if (str[*n] == '.' || str[*n] == '+' || str[*n] == '#') {
        *n += 1;
        *nb += 1;
    }
    format[1] = my_getnbr(&str[*n]);
    for (; str[*n] && is_num(str[*n]); *nb += 1, *n += 1);
    return format;
}

void get_flags(char *str, int *i, va_list ap)
{
    char *flag[] =
    {"s", "c", "d", "b", "S", "i", "o",
    "u", "x", "X", "f", "p", "F", "ld", "lld", NULL};
    int *format;
    int len = 0;
    int nb = 0;
    int n = *i;

    for (int o = 0; str[n] && flag[o]; o++) {
        len = my_strlen(flag[o]);
        n = *i;
        format = get_format(&nb , str, &n);
        if (str[n] && !my_strncmp(flag[o], &str[n], len)) {
            my_display_flag(my_strndup(&str[n], len), ap, format);
            free(format);
            *i += (len + nb - 1);
            return;
        }
        free(format);
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    va_start(ap, str);

    if (error_case(str))
        return 84;
    if (!str)
        return 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%' && !display_modulo(str, &i))
            get_flags(str, &i, ap);
        else if (str[i] != '%')
            write(1, &str[i], 1);
    }
    va_end(ap);
    return 0;
}
