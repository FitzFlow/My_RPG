/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday07-idriss.said
** File description:
** my_strncat
*/
#include <string.h>
#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int len = my_strlen(dest);
    int o = len;

    if (!src)
        return (dest);
    for (int i = 0; src[i] || i < n; i++, o++)
        dest[o] = src[i];
    dest[o] = '\0';
    return (dest);
}
