/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** get_file_in_array
*/

#include "rpg.h"

void putchar_stderr(const char c)
{
    write(2, &c, 1);
}

void putstr_stderr(const char *string)
{
    unsigned int i = 0;

    for (; string[i] != '\0'; putchar_stderr(string[i]), i++);
}

int count_line_of_file(const char *filepath)
{
    FILE *fd = fopen(filepath, "r");
    size_t len = 0;
    char *c = NULL;
    int line = 0;

    while (getline(&c, &len, fd) != -1)
        line++;
    fclose(fd);
    return (line);
}

int invalid_filepath(FILE *fd, const char *filepath)
{
    if (fd == NULL) {
        putstr_stderr("     [Collision file]\n     -> ");
        putstr_stderr(filepath);
        putstr_stderr(": Invalide filepath or inexsiting\n");
        return -1;
    }
    return 0;
}

char **get_file_in_array(const char *filepath)
{
    FILE *fd = fopen(filepath, "r");
    size_t len = 0;
    int line = 0;
    char *c = NULL;
    char **array = NULL;

    if (invalid_filepath(fd, filepath) == -1)
        return NULL;
    array = malloc(sizeof(char *) * (count_line_of_file(filepath) + 1));

    for (; getline(&c, &len, fd) != -1; array[line] = my_strdup(c), line++);
    array[line] = NULL;
    fclose(fd);
    return (array);
}
