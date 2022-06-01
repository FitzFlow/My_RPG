/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** putstr
*/
#include <unistd.h>

#include "my_printf.h"

void my_putstr_printf(va_list ap, int *format)
{
    int i = 0;
    int e = 0;
    char *str = va_arg(ap, char *);

    if (!str)
        return;
    for (; str[i]; i++);
    if (format[1] == 0)
        e = my_strlen(str);
    else
        e = format[1];
    for (int o = 0; o < format[0] - e; o++)
        write(1, " ", 1);
    if (format[1] > 0)
        i = format[1];
    write(1, str, i);
}
