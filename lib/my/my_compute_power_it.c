/*
** EPITECH PROJECT, 2021
** power
** File description:
** power
*/

int my_compute_power_it(int nb, int p)
{
    int res = nb;

    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    if (p <= 0)
        return (0);
    for (; p != 1; res *= nb, p--);
    return (res);
}
