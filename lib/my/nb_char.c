/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** nb_char
*/

int nb_char(char *str, char c)
{
    int nb = 0;

    if (!str)
        return 0;
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            nb++;
    return nb;
}
