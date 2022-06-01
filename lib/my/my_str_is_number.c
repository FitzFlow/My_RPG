/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** my_str_is_number
*/

int my_str_is_number(char *str)
{
    if (!str)
        return 0;
    for (int i = 0; str[i]; i++)
        if ((str[i] < '0' || str[i] > '9'))
            return 0;
    return 1;
}
