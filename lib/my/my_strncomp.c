/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday04-idriss.said
** File description:
** my_strcomp
*/

int my_strncomp(char const *s1, char const *s2, int n)
{
    for (int i = 0; s1[i] && i < n; i++)
        if (!s2[i] || s2[i] != s1[i])
            return 0;
    return 1;
}
