/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** my_strlen_alpha
*/
#include "my.h"

int my_strlen_alpha(char *str)
{
    int len = 0;

    for (int i = 0; str[i]; i++)
        if (is_alpha(str[i]))
            len++;
    return len;
}
