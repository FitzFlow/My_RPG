/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strncpy
*/
#include <string.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (!src)
        return (NULL);
    for (; i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
