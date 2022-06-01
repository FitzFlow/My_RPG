/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-myprintf-idriss.said
** File description:
** function_base
*/
#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>

void put_hashtag(int len_base, int *format, char *base)
{
    if (len_base == 8 && format[2] == 3)
        write(1, "0", 2);
    if (len_base == 16 && format[2] == 3) {
        write(1, "0", 2);
        if (base[15] <= 'Z')
            write(1, "X", 2);
        else
            write(1, "x", 2);
    }
}

void my_put_base_printf(va_list ap, char *base, int *format)
{
    long int nbr = va_arg(ap, long int);
    int len_base = my_strlen(base);
    char *str = my_convert_base(nbr, base);

    if (nbr == 0 && format[2]) {
        write(2, "(nil)", 6);
        return;
    }
    if (len_base == 16 && format[2] == 1)
        write(1, "0x", 3);
    put_hashtag(len_base, format, base);
    write(1, str, my_strlen(str));
    free(str);
}
