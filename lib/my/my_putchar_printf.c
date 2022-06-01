/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday07-idriss.said
** File description:
** my_putchar
*/
#include <unistd.h>
#include "my_printf.h"

void my_putchar_printf(va_list ap, int *format)
{
    char c = va_arg(ap, int);

    for (int i = 0; i < format[0] - 1; i++)
        write(1, " ", 1);
    write(1, &c, 1);
}
