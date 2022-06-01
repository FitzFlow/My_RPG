/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-idriss.said
** File description:
** create_text
*/
#include <SFML/Graphics.h>

sfText *create_text(char *txt, int size, sfFont *font, sfColor color)
{
    sfText *text = sfText_create();

    if (!font || !text || !txt) {
        (text) ? sfText_destroy(text) : 0;
        return NULL;
    }
    sfText_setString(text, txt);
    sfText_setFont(text, font);
    sfText_setColor(text, color);
    sfText_setCharacterSize(text, size);
    return text;
}
