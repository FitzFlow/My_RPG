/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** my_music
*/

#include "rpg.h"

my_music_t init_music(const char *music_name)
{
    my_music_t music;
    music.music = sfMusic_createFromFile(music_name);
    return (music);
}
