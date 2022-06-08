/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** get_file_in_folder
*/
#include <sys/types.h>
#include <dirent.h>
#include "my.h"

char **get_file_in_folder(char *path_file)
{
    DIR *file = opendir(path_file);
    char **path = NULL;
    struct dirent *info;

    if (!file){dprintf(2, "Error load file %s\n", path_file); return NULL;}
    path_file = my_strcat(path_file, "/");
    info = readdir(file);
    for (int i = 0; (info = readdir(file)); i++)
        if (info->d_name[0] != '.' && info->d_type == DT_REG)
            path = add_line_in_array(path, my_strcat(path_file, info->d_name));
    closedir(file);
    return path;
}
