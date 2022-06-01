/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-bistromatic-idriss.said
** File description:
** list_to_str
*/
#include "my_printf.h"
#include <stdlib.h>

char *list_to_str(my_stack_t *res, int len)
{
    char *str = NULL;
    my_stack_t *tmp = res;

    if (len <= 0 || !res)
        return str;
    str = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) {
        str[i] = tmp->data;
        tmp = tmp->next;
    }
    str[len] = '\0';
    free_list(res);
    return str;
}
