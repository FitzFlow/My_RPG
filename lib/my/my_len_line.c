/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-BSQ-idriss.said
** File description:
** my_len_line
*/

int my_len_line(char *str, int l)
{
    int len = 0;

    for (int i = 0, my_l = 0; str[i] && my_l <= l; i++) {
        if (str[i] == '\n')
            my_l++;
        if (my_l == l)
            len++;
    }
    return len;
}
