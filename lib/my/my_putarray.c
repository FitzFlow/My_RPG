/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-idriss.said
** File description:
** my_putarray
*/

void my_putstr(char const *);

void my_putarray(char **array)
{
    for (int i = 0; array[i]; i++) {
        my_putstr((char const *)array[i]);
        my_putstr("\n");
    }
}
