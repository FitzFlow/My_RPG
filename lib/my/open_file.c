/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** open_file
*/
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int open_file(char *path)
{
    int fd = open(path, O_CREAT, S_IRWXU);

    if (fd == -1)
        return -1;
    close(fd);
    return open(path, O_RDWR);
}

FILE *fopen_file(char *path)
{
    FILE *file = fopen(path, "w+");

    if (!file) {return NULL;};
    fclose(file);
    return fopen(path, "rwb");
}