/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** play_music
*/

#include "rpg.h"

void play_music(all_t *all)
{
    if (!all->menu_music.music)
        return;
    sfMusic_play(all->menu_music.music);
    sfMusic_setLoop(all->menu_music.music, sfTrue);
    sfMusic_pause(all->menu_music.music);
}
