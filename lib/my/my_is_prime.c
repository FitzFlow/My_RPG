/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int nb2 = nb - 1; nb2 != 1; nb2 -= 1)
        if (nb % nb2 == 0)
            return (0);
    return (1);
}
