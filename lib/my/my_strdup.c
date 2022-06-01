/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday08-idriss.said
** File description:
** my_strdup
*/
#include "my.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    int len = my_strlen(str);
    char *dup = malloc(sizeof(char) * (len + 1));

    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++)
        dup[i] = str[i];
    dup[len] = '\0';
    return (dup);
}
