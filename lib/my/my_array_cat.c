/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** my_array_cat
*/
#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *);
int my_arraylen(char **);
void free_array(char **);

char **my_array_cat(char **a1, char **a2)
{
    int i = 0;
    int len = my_arraylen(a1) + my_arraylen(a2);
    char **new = NULL;

    if (!a1)
        return a2;
    if (!a2)
        return a1;
    new = malloc(sizeof(*new) * (len + 1));
    for (i = 0; a1[i]; i++)
        new[i] = my_strdup(a1[i]);
    for (int o = 0; a2[o]; o++, i++)
        new[i] = my_strdup(a2[o]);
    new[i] = NULL;
    free_array(a1);
    free_array(a2);
    return new;
}
