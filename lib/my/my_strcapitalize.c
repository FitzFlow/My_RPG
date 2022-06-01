/*
** EPITECH PROJECT, 2021
** strupcase
** File description:
** strupcase
*/

void to_modify(char *str, int *i)
{
    if ((*i != 0 && str[*i - 1] <= 32) || *i == 0)
        if ((str[*i] >= 'a' && str[*i] <= 'z'))
            str[*i] -= 32;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i]; i++)
        to_modify(str, &i);
    return (str);
}
