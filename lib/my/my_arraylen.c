/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_arraylen
*/

int my_arraylen(char **array)
{
    int len = 0;

    if (!array)
        return 0;
    for (; array[len]; len++);
    return len;
}
