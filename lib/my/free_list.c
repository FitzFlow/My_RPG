/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-evalexpr-idriss.said
** File description:
** free_list
*/
#include "my_printf.h"
#include <stdlib.h>

void free_list(my_stack_t *list)
{
    my_stack_t *l = NULL;

    while (list != NULL) {
        l = list->next;
        free(list);
        list = l;
    }
}
