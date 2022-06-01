/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return (0);
    for (; str[i]; i++);
    return (i);
}
