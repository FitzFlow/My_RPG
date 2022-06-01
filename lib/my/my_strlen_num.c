/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-infinadd-idriss.said
** File description:
** my_strlen_num
*/

int is_num(char c);

int my_strlen_num(char *str)
{
    int len = 0;

    for (int i = 0; str[i]; i++)
        if (is_num(str[i]))
            len++;
    return len;
}
