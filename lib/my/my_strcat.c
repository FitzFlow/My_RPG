/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday07-idriss.said
** File description:
** my_strcat
*/
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest) + my_strlen(src);
    int i = 0;
    char *new = NULL;

    if (!src || len == 0)
        return my_strdup(dest);
    new = malloc(sizeof(char) * (len + 1));
    for (i = 0; dest[i]; i++)
        new[i] = dest[i];
    for (int o = 0; src[o]; o++, i++)
        new[i] = src[o];
    new[i] = '\0';
    return (new);
}
