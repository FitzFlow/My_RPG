/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_perror
*/
#include "unistd.h"
int my_strlen(char *);

void my_perror(char *str)
{
    if (!str)
        return;
    write(2, str, my_strlen(str) + 1);
}
