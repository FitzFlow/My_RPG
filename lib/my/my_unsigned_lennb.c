/*
** EPITECH PROJECT, 2021
** B-PSU-100-RUN-1-1-myprintf-idriss.said
** File description:
** my_unsigned_len_nb
*/

int my_unsigned_lennb(unsigned int nb)
{
    int un = 1;
    int len = 0;

    for (; nb / un >= 10; un *= 10, len++);
    return len + 1;
}
