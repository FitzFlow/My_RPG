/*
** EPITECH PROJECT, 2021
** lib
** File description:
** my_convert_base
*/
#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"

int my_strlen(char const *);

void create_cell(my_stack_t **stack, char data)
{
    my_stack_t *new = NULL;

    if (!data)
        return;
    new = malloc(sizeof(*new));
    new->data = data;
    new->next = (*stack);
    (*stack) = new;
}

char *my_convert_base(long int nbr, char *bases)
{
    my_stack_t *stack = NULL;
    int base = my_strlen(bases);
    int i = 0;

    for (; nbr / base > 0; i++) {
        create_cell(&stack, bases[nbr % base]);
        nbr /= base;
    }
    create_cell(&stack, bases[nbr % base]);
    i++;
    return list_to_str(stack, i);
}
