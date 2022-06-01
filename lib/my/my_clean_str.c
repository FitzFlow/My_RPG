/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_clean_str
*/
#include "my.h"

int my_strlen_cleanstr(char *str, char c)
{
    int len = 0;
    int nb = 0;
    int i = 0;

    for (; str[i] == c; i++);
    for (int o = 0; str[i]; o++, i++) {
        if (i - 1 >= 0 && str[i - 1] == c && str[i] != c && o)
            nb++;
        if (str[i] != c)
            len++;
    }
    len += nb;
    return len;
}

char *my_clean_str(char *str, char c)
{
    char *new = NULL;
    int o = 0;
    int i = 0;

    new = malloc(sizeof(char) * (my_strlen_cleanstr(str, c) + 1));
    for (; str[i] == c; i++);
    for (; str[i]; i++) {
        if (i - 1 >= 0 && str[i - 1] == c && str[i] != c && o) {
            new[o] = c;
            o++;
        }
        if (str[i] != c) {
            new[o] = str[i];
            o++;
        }
    }
    new[o] = '\0';
    free(str);
    return new;
}
