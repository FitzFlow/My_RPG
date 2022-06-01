/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** ptr_line_in_array
*/
#include "my.h"

char *ptr_line_in_array(char **array, char *target)
{
    int i = 0;

    for (; array[i]; i++)
        if (!my_strncmp(array[i], target, my_strlen(target)))
            return array[i];
    return NULL;
}
