/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strcpy
*/
#include <string.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (!src)
        return (NULL);
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
