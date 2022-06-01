/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-myprintf-idriss.said
** File description:
** my_put_long
*/
#include "my_printf.h"
#include <unistd.h>

void my_put_long_printf(va_list ap, int *format)
{
    long long int nb = va_arg(ap, long long int);
    long long int i = 1;

    for (int o = 0; o < format[1] - my_lennb(nb); o++)
        write(1, " ", 1);
    if (nb < 0) {
        write(1, "-", 1);
        nb *= -1;
    }
    for (; nb / i >= 10; i *= 10);
    for (char tmp; i != 0; nb %= i, i /= 10) {
        tmp = (nb / i) + 48;
        write(1, &tmp, 1);
    }
}
