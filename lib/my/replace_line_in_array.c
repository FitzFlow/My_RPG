/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** replace_line_in_array
*/
#include "my.h"

char **replace_line_in_array(char **array, char *str, int index)
{
    char **new = NULL;
    int o = 0;

    if (!array)
        return NULL;
    new = malloc(sizeof(char *) * (my_arraylen(array) + 2));
    for (int i = 0; array[i]; o++, i++) {
        if (index == i)
            new[o] = str;
        else
            new[o] = array[i];
    }
    if (!array[index]) {
        new[o] = str;
        o++;
    }
    new[o] = NULL;
    free(array);
    return new;
}
