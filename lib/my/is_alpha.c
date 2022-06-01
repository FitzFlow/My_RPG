/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** is_alpha
*/

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}
