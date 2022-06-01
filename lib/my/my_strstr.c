/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strstr
*/
#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int o = 0;

    if (!to_find)
        return (str);
    for (; str && str[i]; i++) {
        for (; str[i] && str[i] == to_find[o]; i++, o++);
        if (!to_find[o])
            return (&str[i - o]);
    }
    return (NULL);
}
