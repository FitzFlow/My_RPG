/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** delete_line_in_array
*/
#include "my.h"

char **delete_line_in_array(char **array, int index)
{
    char **new = NULL;
    int o = 0;
    int len = my_arraylen(array);

    if (!array)
        return NULL;
    if (len < index)
        return array;
    new = malloc(sizeof(char *) * len);
    if (!new)
        return array;
    for (int i = 0; i < len; i++) {
        if (i != index) {
            new[o] = array[i];
            o++;
        }
    }
    new[o] = NULL;
    return new;
}
