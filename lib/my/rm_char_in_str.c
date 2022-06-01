/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** rm_char_in_str
*/
#include "my.h"

char *rm_char_in_str(char *str, char c)
{
    char *new = malloc(sizeof(char) * (my_strlen_without(str, c) + 1));
    int o = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != c) {
            new[o] = str[i];
            o++;
        }
    new[o] = '\0';
    free(str);
    return new;
}
