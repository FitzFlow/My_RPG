/*
** EPITECH PROJECT, 2021
** delivry
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include "my_printf.h"

int max_min(int nb)
{
    if (nb == 0) {
        write(1, "0", 1);
        return 1;
    }
    if (nb == 2147483647) {
        write(1, "2147483647", 11);
        return 1;
    }
    if (nb == -2147483648) {
        write(1, "-2147483648", 12);
        return 1;
    }
    return 0;
}

void put_format(int *format, int *nb)
{
    if (format[1] == 0)
        format[0] -= my_lennb(*nb);
    for (int o = 0; o < format[0] - format[1] - format[2]; o++)
        write(1, " ", 1);
    for (int o = 0; o < format[1] - my_lennb(*nb); o++)
        write(1, "0", 1);
    if (format[2]) {
        if (*nb < 0)
            *nb *= -1;
        write(1, "+", 1);
    }
}

void my_put_nbr_printf(va_list ap, int *format)
{
    int i = 1;
    int nb = va_arg(ap, int);

    put_format(format, &nb);
    if (max_min(nb))
        return;
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
