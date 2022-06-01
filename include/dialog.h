/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** dialog
*/

#ifndef DIALOG_H_
    #define DIALOG_H_
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include "my.h"

typedef struct dialog {
    char *id;
    char **dialog;
    sfText *text;
    struct dialog *next;
} dialog_t;

/*      Utilities      */
dialog_t *init_dialog(char *filepath);
sfText *create_text(char *txt, int size, sfFont *font, sfColor color);
sfFont *load_font(char *path);

#endif /* !DIALOG_H_ */
