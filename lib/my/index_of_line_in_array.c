/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** index_of_line_in_array
*/
#include "my.h"

int index_of_line_in_array(char **array, char *target)
{
    int i = 0;

    for (; array[i]; i++)
        if (!my_strncmp(array[i], target, my_strlen(target)))
            break;
    return i;
}
