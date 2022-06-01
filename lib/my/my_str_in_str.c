/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday12-idriss.said
** File description:
** my_is_in_str
*/

int my_str_in_str(char *str, char *to_find)
{
    int o = 0;

    if (!to_find)
        return 0;
    for (int i = 0; str && str[i]; i++) {
        for (; str[i] && str[i] == to_find[o]; i++, o++);
        if (!to_find[o])
            return 1;
    }
    return 0;
}
