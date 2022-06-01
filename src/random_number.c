/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** random_number
*/

#include "rpg.h"

int random_number(void)
{
    int fd = open("/dev/urandom", O_RDONLY);
    int number = 0;

    if (fd == -1) {
        close(fd);
        return (number);
    }
    read(fd, &number, 4);
    close(fd);
    return (number);
}
