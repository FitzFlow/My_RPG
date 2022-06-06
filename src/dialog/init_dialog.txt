/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** dialog
*/
#include "dialog.h"
#include <stdlib.h>

char *get_id(char *str, int *n)
{
    int i = 0;
    int len = 0;
    char *id = NULL;

    if (!str)
        return NULL;
    for (; str[i] && my_strncmp(&str[i], "id:", 3); i++);
    if (!str[i])
        return NULL;
    i += 3;
    if (!str[i] || !str[i + 1])
        return NULL;
    for (int o = i; str[o] && str[o] != '\n'; len++, o++);
    id = my_strndup(&str[i], len);
    *n += (i + (len + 1));
    return id;
}

char **get_dialog(char *str, int *n)
{
    int i = 0;
    int len = 0;
    char **dialog = NULL;

    if (!str)
        return NULL;
    for (; str[i] && my_strncmp(&str[i], "id:", 3); len++, i++);
    dialog = my_str_to_word_array(my_strndup(str, len), '\n');
    *n += (len - i);
    return dialog;
}

dialog_t *create_dialog(char *id, char **dialog)
{
    dialog_t *new = malloc(sizeof(*new));

    if (!new)
        return NULL;
    new->id = id;
    new->dialog = dialog;
    new->text = NULL;
    new->next = NULL;
    return new;
}

dialog_t *add_dialog(dialog_t *list, char *id, char **dialog)
{
    dialog_t *new = create_dialog(id, dialog);
    dialog_t *tmp = list;

    if (!list)
        return new;
    for (; tmp->next && my_strcmp(tmp->id, id); tmp = tmp->next);
    if (!my_strcmp(tmp->id, id) && !dialog)
        tmp->dialog = my_array_cat(tmp->dialog, dialog);
    else
        tmp->next = new;
    return list;
}

dialog_t *init_dialog(char *filepath)
{
    char *buffer = my_load_file(filepath);
    dialog_t *list = NULL;
    char **dialog = NULL;
    char *id = NULL;

    if (!buffer)
        return NULL;
    for (int i = 0; buffer[i]; i++) {
        id = get_id(&buffer[i], &i);
        if (!id || !buffer[i])
            break;
        dialog = get_dialog(&buffer[i], &i);
        if (dialog)
            list = add_dialog(list, id, dialog);
    }
    return list;
}
