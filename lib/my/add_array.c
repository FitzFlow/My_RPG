/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** add_array
*/
#include "my.h"

int len_array_of_array(char ***array)
{
    int len = 0;

    if (!array)
        return 0;
    for (; array[len]; len++);
    return len;
}

char ***add_tab(char ***dest, char **array)
{
    char ***new = NULL;
    int len = len_array_of_array(dest);
    if (!array)
        return dest;
    if (!dest) {
        if (!(new = malloc(sizeof(char **) * 2)))
            return NULL;
        new[0] = array;
        new[1] = NULL;
        return new;
    }
    if (!len || !(new = malloc(sizeof(char **) * (len + 2))))
        return dest;
    for (int i = 0; dest[i]; i++)
        new[i] = dest[i];
    new[len] = array;
    new[len + 1] = NULL;
    free(dest);
    return new;
}
