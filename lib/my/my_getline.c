/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-bistromatic-idriss.said
** File description:
** my_getline
*/
#include <stdlib.h>

char *my_strdup(char *);

int my_linelen(char *str)
{
    int len = 0;

    for (; str[len] && str[len] != '\n'; len++);
    return len;
}

char *my_linendup(char *str, int n)
{
    char *dup;
    int i = 0;

    if (!str)
        return NULL;
    if (my_linelen(str) < n)
        return my_strdup(str);
    dup = malloc(sizeof(char) + (n + 1));
    for (; str[i] && i < n; i++)
        dup[i] = str[i];
    dup[i] = '\0';
    return (dup);
}

char *my_getline(char *str)
{
    int i = 0;

    for (; str[i] && str[i] != '\n'; i++);
    return my_linendup(str, i);
}
