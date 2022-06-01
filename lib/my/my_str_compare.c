/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-navy-florian.etheve
** File description:
** my_str_compare
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "my.h"

int my_strlen(const char *str)
{
    int len = 0;
    for (; str[len] != '\0'; len++);
    return (len);
}

bool my_str_compare(char const *str, char const *str2)
{
    int cpt = 0;

    if (str[cpt] == '\0' || str2[cpt] == '\0')
        return (false);
    else if (my_strlen(str) != my_strlen(str2))
        return (false);
    while (str[cpt] != '\0') {
        if (str[cpt] != str2[cpt])
            return (false);
        cpt++;
    }
    return (true);
}
