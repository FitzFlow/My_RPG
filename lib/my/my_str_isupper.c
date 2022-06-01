/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** my_str_islower
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            return (0);
    return (1);
}
