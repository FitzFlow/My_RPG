/*
** EPITECH PROJECT, 2021
** square root
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    for (; i * i != nb; i++)
        if (i > nb)
            return 0;
    return (i);
}
