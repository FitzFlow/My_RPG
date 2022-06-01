/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_strlen_without
*/

int my_strlen_without(char *str, char c)
{
    int len = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != c)
            len++;
    return len;
}
