/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday08-idriss.said
** File description:
** my_strndup
*/
#include <stdlib.h>

int my_strlen(char *);

char *my_strdup(char *);

char *my_strndup(char *str, int n)
{
    char *dup = NULL;
    int i = 0;

    if (!str)
        return NULL;
    if (my_strlen(str) < n)
        return my_strdup(str);
    dup = malloc(sizeof(char) + (n + 1));
    for (; str[i] && i < n; i++)
        dup[i] = str[i];
    dup[i] = '\0';
    return (dup);
}
