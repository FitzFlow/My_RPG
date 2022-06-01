/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** music
*/

#ifndef MUSIC_H_
    #define MUSIC_H_
    #include "all.h"

typedef struct my_music {
    sfMusic *music;
} my_music_t;

my_music_t init_music(const char *music_name);
void destroy_my_music(my_music_t music);

#endif /* !MUSIC_H_ */
