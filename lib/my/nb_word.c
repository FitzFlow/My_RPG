/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** nb_word
*/

int nb_word(char *str, char delim)
{
    int nb = 0;
    int i = 0;

    if (!str)
        return (0);
    for (; str[i] == delim; i++);
    i++;
    for (; str[i]; i++)
        if (str[i - 1] == delim && str[i] != delim)
            nb++;
    return (nb + 1);
}
