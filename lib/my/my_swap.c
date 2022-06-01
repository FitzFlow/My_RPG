/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday04-idriss.said
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
