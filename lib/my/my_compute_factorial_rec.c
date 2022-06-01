/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday05-idriss.said
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_rec(int nb)
{
    int i = nb;

    if (nb == 0 || nb == 1)
        return (1);
    if (nb < 0)
        return (0);
    if (nb > 12)
        return (0);
    if (nb != 1)
        i = nb * my_compute_factorial_rec(i - 1);
    return (i);
}
