/*
** EPITECH PROJECT, 2021
** my_getnbr_base
** File description:
** my_getnbr_base
*/
#include <stdlib.h>
#include "my.h"

void create_cell_base(my_getnbr_base_t **res, char data)
{
    my_getnbr_base_t *tmp = NULL;

    if (!data)
        return;
    tmp = malloc(sizeof(*tmp));
    tmp->data = data;
    tmp->next = *(res);
    *(res) = tmp;
}

long int my_getnbr_base(long int nb, char *base)
{
    my_getnbr_base_t *res_base = NULL;
    my_getnbr_base_t *tmp = NULL;
    int len_base = my_strlen(base);
    long int res = 0;
    long int i = 1;

    for (; nb > 0; nb /= len_base)
        create_cell_base(&res_base, base[nb % len_base]);
    tmp = res_base;
    for (; tmp; i *= 10) {
        res += (tmp->data * i);
        tmp = res_base->next;
        free(res_base);
    }
    return (res);
}
