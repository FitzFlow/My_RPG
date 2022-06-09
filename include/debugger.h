/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** debugger
*/

#ifndef DEBUGGER_H_
    #define DEBUGGER_H_
    #include <SFML/Graphics.h>
    #include <SFML/Config.h>
    #include <stdbool.h>

typedef struct debugger {
    bool debug;
    sfText **text;
    sfRectangleShape **all;
    bool *all_debug;
}   debugger_t;

#endif /* !DEBUGGER_H_ */
