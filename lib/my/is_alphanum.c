/*
** EPITECH PROJECT, 2021
** alpha
** File description:
** alpha
*/

int is_alphanum(char c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
    (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
