/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** my_nstrdup
*/
#include <stdlib.h>

int my_strlen_nstrdup(char *str, int n)
{
    int len = 0;
    for (int i = n; str[i]; i++)
        len++;
    return len;
}

char *my_nstrdup(char *str, int n)
{
    int len = my_strlen_nstrdup(str, n);
    char *dup = malloc(sizeof(char) * (len + 1));
    int o = 0;

    for (int i = n; str[i]; o++, i++)
        dup[o] = str[i];
    dup[o] = '\0';
    return (dup);
}
