/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** load_2d_file
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

int get_len_line_in_file(char *pathfile)
{
    int fd = open(pathfile, O_RDONLY);
    int l = 0;
    char c = '0';
    int len = 0;

    while (read(fd, &c, 1) != -1 && l != 2) {
        if (l == 1 && c != '\n')
            len++;
        if (c == '\n')
            l++;
    }
    close(fd);
    return len;
}

int get_nb_line_in_file(char *pathfile)
{
    int fd = open(pathfile, O_RDONLY);
    char c = '0';
    int len = 0;

    while (read(fd, &c, 1) != -1 && c != '\n')
        if (c != '\n')
            len = (len * 10) + (c - 48);
        else if (c != '\n' && !is_num(c))
            return 0;
    close(fd);
    return len;
}

void load_file(char *pathfile, char **dest)
{
    int fd = open(pathfile, O_RDONLY);
    char c = '0';

    if (fd == -1) {
        for (int i = 0; dest[i]; i++)
            free(dest[i]);
        free(dest);
        return;
    }
    for (int y = 0, x = 0; read(fd, &c, 1) != -1; x++) {
        if (c != '\n') {
            dest[y][x] = c;
        } else {
            x = 0;
            y++;
        }
    }
}

char **my_load_2d_file(char *pathfile)
{
    int nb_ligne = get_nb_line_in_file(pathfile) + 1;
    int len = get_len_line_in_file(pathfile);
    char **tab = NULL;
    char c = '0';

    if (len <= 1 || nb_ligne <= 2) {
        write(2, "Line to small or Nb line to small\n", 15);
        return NULL;
    }
    tab = malloc(sizeof(char *) * (nb_ligne + 1));
    load_file(pathfile, tab);
    tab[nb_ligne + 1] = NULL;
    return tab;
}
