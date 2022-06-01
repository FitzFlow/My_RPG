/*
** EPITECH PROJECT, 2021
** is_alpha
** File description:
** is_alpha
*/

int my_cmp(char const *str, int i)
{
    if (str[i] < 'a' || str[i] > 'z')
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
    return (1);
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_cmp(str, i))
            return (0);
    return (1);
}
