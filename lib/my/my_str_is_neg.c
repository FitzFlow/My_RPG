/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** my_str_is_neg
*/

int my_str_is_neg(char const *str)
{
    int nb = 0;

    for (int i = 0; str[i] && (str[i] == '-' || str[i] == '+'); i++)
        if (str[i] == '-')
            nb++;
    return nb % 2;
}
