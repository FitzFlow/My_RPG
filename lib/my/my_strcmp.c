/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    if (!s1 && s2)
        return (s2[0] + 48) * -1;
    if (s1 && !s2)
        return (s2[0] + 48);
    if (!s1 && !s2)
        return 0;
    for (int i = 0; s1[i]; i++) {
        if (s1[i] > s2[i])
            return (s1[i]);
        if (s1[i] < s2[i]) {
            i = s1[i];
            return (i *= -1);
        }
    }
    return (0);
}
