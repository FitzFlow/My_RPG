/*
** EPITECH PROJECT, 2021
** power
** File description:
** power
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    if ( p < 0)
        return (0);
    p--;
    if (p != 0)
        nb = nb * my_compute_power_rec(nb, p);
    return (nb);
}
