/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday05-idriss.said
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;

    for (; !my_is_prime(i); i++);
    return (i);
}
