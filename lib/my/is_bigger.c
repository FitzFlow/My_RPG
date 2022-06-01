/*
** EPITECH PROJECT, 2021
** B-CPE-101-RUN-1-1-bistromatic-idriss.said
** File description:
** is_bigger
*/

int my_strlen(char *str);

int is_bigger(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 > len2)
        return 1;
    if (len1 < len2)
        return 0;
    for (int i = 0; str1[i]; i++) {
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return 0;
    }
    return 1;
}
