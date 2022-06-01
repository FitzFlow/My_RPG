/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** add_line_in_array
*/
#include "my.h"

char **add_line_in_array(char **src, char *str)
{
    char **dest = NULL;
    int i = 0;
    int len = my_arraylen(src);

    if (!str)
        return src;
    dest = malloc(sizeof(char *) * (len + 2));
    for (; i < len; i++)
        dest[i] = my_strdup(src[i]);
    dest[i] = my_strdup(str);
    dest[i + 1] = NULL;
    free_array(src);
    return dest;
}
