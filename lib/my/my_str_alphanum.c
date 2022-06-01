/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_str_alphanum
*/
#include "my.h"

int my_str_alphanum(char *str)
{
    for (int i = 0; str[i]; i++)
        if (!is_num(str[i]) && !is_alpha(str[i]))
            return 0;
    return 1;
}
