/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-myprintf-idriss.said
** File description:
** my_putfloat
*/
#include "my_printf.h"
#include <unistd.h>

void my_putfloat_printf(va_list ap, int *format)
{
    float test = va_arg(ap, double);
    int f = my_compute_power_it(10, format[1]);
    long long int nb = test * f;
    long long int i = 1;

    if (nb < 0) {
        write(1, "-", 1);
        nb *= -1;
    }
    for (; nb / i >= 10; i *= 10);
    for (char tmp; i != 0;) {
        tmp = (nb / i) + 48;
        write(1, &tmp, 1);
        if (i == f)
            write(1, ".", 1);
        nb %= i;
        i /= 10;
    }
}
