/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_arraydup
*/
#include "my.h"

char **my_arraydup(char **array)
{
    int len = my_arraylen(array);
    char **new_array = NULL;

    if (!array)
        return NULL;
    new_array = malloc(sizeof(char *) * (len + 1));
    for (int i = 0; array[i]; i++)
        new_array[i] = my_strdup(array[i]);
    new_array[len] = NULL;
    return new_array;
}
