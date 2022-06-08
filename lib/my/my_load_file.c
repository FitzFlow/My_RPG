/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** load_file
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_load_file(char *pathfile)
{
    int fd = open(pathfile, O_RDONLY);
    char *buffer = NULL;
    struct stat sb;
    int len = 0;

    stat(pathfile, &sb);
    if (fd < 0) {
        write(2, "Error load file\n", 16);
        return NULL;
    }
    len = sb.st_size;
    if (!len)
        return NULL;
    buffer = malloc(sizeof(char) * (len + 1));
    read(fd, buffer, len);
    buffer[len] = '\0';
    return buffer;
}
