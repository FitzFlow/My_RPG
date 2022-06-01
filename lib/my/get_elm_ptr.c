/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-navy-idriss.said
** File description:
** get_elm_ptr
*/

char *get_elm_ptr(char *str, int index, char delim)
{
    int i = 0;
    int o = 0;

    for (; o != index && str[i]; i++)
        if (str[i] == delim)
            o++;
    if (str[i] && o == index)
        return &str[i];
    return str;
}
