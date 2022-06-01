/*
** EPITECH PROJECT, 2021
** is_num
** File description:
** is_num
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}
