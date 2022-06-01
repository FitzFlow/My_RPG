/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-bistromatic-idriss.said
** File description:
** my_replace_char
*/

void my_replace_char(char *str, char target, char c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == target) {
            str[i] = c;
            return;
        }
}
