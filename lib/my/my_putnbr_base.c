/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_putnbr_base
*/

long int my_getnbr_base(long int nb, char *base);

void my_put_nbr(int);

void my_putnbr_base(long int nb, char *base)
{
    my_put_nbr(my_getnbr_base(nb, base));
}
