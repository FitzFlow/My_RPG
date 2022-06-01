/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** rm_char_in_str
*/
#include "my.h"

char *rm_tab_in_str(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i + 1] && str[i] == '\\' && str[i + 1] == 't') {
            str[i] = ' ';
            str[i + 1] = ' ';
        }
    }
    return str;
}
