/*
** EPITECH PROJECT, 2021
** str_to_word_arraw
** File description:
** ds
*/
#include "my.h"

char **my_str_to_word_array(char *str, char delim)
{
    char **tab = NULL;
    int len = 0;
    int l = 0;
    int word = nb_word(str, delim);

    if (!str)
        return (NULL);
    tab = malloc(sizeof(char *) * (word + 1));
    for (int i = 0; l < word; i++, l++) {
        for (; str[i] && str[i] == delim; i++);
        for (int o = i; str[o] && str[o] != delim; o++, len++);
        tab[l] = my_strndup(&str[i], len);
        i += len;
        len = 0;
    }
    tab[l] = NULL;
    return (tab);
}
