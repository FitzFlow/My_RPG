/*
** EPITECH PROJECT, 2021
** pr
** File description:
** pr
*/

int is_printable(char c)
{
    if (c < ' ' || c > 'z')
        return (0);
    return (1);
}
