/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** my_strcmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; s1[i] && i < n; i++) {
        if (s1[i] > s2[i])
            return (s1[i]);
        if (s1[i] < s2[i]) {
            i = s1[i];
            return (i *= -1);
        }
    }
    if (i != n)
        return 1;
    return (0);
}
