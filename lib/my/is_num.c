/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** is_num
*/

int is_num(char c)
{
    if (!c)
        return 0;
    if (c < '0' || c > '9')
        return 0;
    return 1;
}
