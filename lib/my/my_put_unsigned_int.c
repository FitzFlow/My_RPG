/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-myprintf-idriss.said
** File description:
** my_put_unsigned_int
*/
#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>

void my_put_unsigned_int_printf(va_list ap, int *format)
{
    long int nb = va_arg(ap, long);
    char *nbr = my_convert_base(nb, "01");
    (void) format;

    write(1, nbr, my_strlen(nbr));
    free(nbr);
}

void my_put_no_printable_char_printf(va_list ap, int *format)
{
    char *nb = va_arg(ap, char *);
    char *nbr = NULL;
    (void) format;

    for (int i = 0; nb[i]; i++) {
        if (nb[i] < 32 || nb[i] >= 127) {
            write(1, "\\", 1);
            nbr = my_convert_base(nb[i], "01234567");
            write(1, nbr, my_strlen(nbr));
            free(nbr);
        } else
            write(1, &nb[i], 1);
    }
}
