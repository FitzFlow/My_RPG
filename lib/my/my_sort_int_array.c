/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday04-idriss.said
** File description:
** my_sort_int_array
*/

void my_swap(int *a, int *b);

void my_sort_int_array(int *array, int size)
{
    for (int i = 1; i < size; i++)
        for (int o = i; o > 0 && array[o] < array[o - 1]; o--)
            my_swap(&array[o], &array[o - 1]);
}
