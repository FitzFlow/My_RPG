/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** flags
*/
#include "my_printf.h"
#include <stdlib.h>

static put_t FUNCS[] = {
    {"s", &my_putstr_printf},
    {"c", &my_putchar_printf},
    {"d", &my_put_nbr_printf},
    {"i", &my_put_nbr_printf},
    {"ld", &my_put_long_printf},
    {"lld", &my_put_long_printf},
    {"f", &my_putfloat_printf},
    {"F", &my_putfloat_printf},
    {"b", &my_put_unsigned_int_printf},
    {"S", &my_put_no_printable_char_printf},
    {NULL, NULL}
};

static put_base_t BASE_FUNCS[] = {
    {"o", "01234567", &my_put_base_printf},
    {"u", "0123456789", &my_put_base_printf},
    {"x", "0123456789abcdef", &my_put_base_printf},
    {"p", "0123456789abcdef", &my_put_base_printf},
    {"X", "0123456789ABCDEF", &my_put_base_printf},
    {NULL, NULL, NULL}
};

int is_format(char c)
{
    if (c == '.' || c == '+' || c == '#')
        return 1;
    return 0;
}

int is_flags(char *flag)
{
    char *str[] =
    {"s", "d", "c", "b", "S", "i", "o", "u",
    "x", "X", "f", "p", "F", "ld", "lld", NULL};

    for (int i = 0, o = 0; str[i]; i++) {
        for (; is_num(flag[o]) || is_format(flag[o]); o++);
        if (!my_strncmp(str[i], &flag[o], my_strlen(str[i])))
            return 1;
    }
    return 0;
}

void my_display_flag(char *flags, va_list ap, int *format)
{
    int i = 0;
    int o = 0;

    for (; FUNCS[i].flag && !my_strcmp(FUNCS[i].flag, flags) != 1; i++);
    for (; o < 4 && !my_strcmp(BASE_FUNCS[o].flags, flags) != 1; o++);
    if ((!my_strcmp(flags, "f") || !my_strcmp(flags, "F"))
    && (format[1] == 0 || format[1] > 6))
        format[1] = 6;
    if (!my_strcmp(flags, "p"))
        format[2] = 1;
    if (FUNCS[i].flag)
        FUNCS[i].put(ap, format);
    else
        BASE_FUNCS[o].put_base(ap, BASE_FUNCS[o].base, format);
    free(flags);
}
