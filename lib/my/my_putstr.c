/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** putstr
*/
#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;

    if (!str)
        return;
    for (; str[i]; i++);
    write(1, str, i);
}
