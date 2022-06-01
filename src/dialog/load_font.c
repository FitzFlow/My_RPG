/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-idriss.said
** File description:
** load_font
*/
#include <SFML/Graphics.h>

sfFont *load_font(char *path)
{
    return sfFont_createFromFile(path);
}
