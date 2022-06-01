/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_revstr
*/
#include <string.h>
#include <stdio.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int end = my_strlen(str) - 1;
    int i = 0;
    char temp;

    if (!str)
        return (NULL);
    for (; i < end; i++, end--) {
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
    }
    return (str);
}
