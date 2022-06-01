/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-idriss.said
** File description:
** my_strlen_split
*/

int my_strlen_split(char *str, char split)
{
    int i = 0;

    for (; str[i] && str[i] != split; i++);
    return i;
}
