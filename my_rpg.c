/*
** EPITECH PROJECT, 2022
** my_rpg_FBIG
** File description:
** my_rpg_FBIG
*/

#include "rpg.h"

void all_animation(all_t *all)
{
    if (PHONE_ANIMATION || PHONE_END_ANIMATION)
        phone_animation(all);
    if (all->view_player1 && NOT_IN_PAUSE)
        movement(all);
    animate_first_button(all);
}

void change_view_pnj(all_t *all)
{
    for (mob_t *npc = all->pnj; npc; npc = npc->next)
        check_colision(GET_POS_S(npc->pnj->sprite), FILTER, &npc->view);
}

void game_loop(void)
{
    all_t *all = load_all_struct();

    init_pnj_and_npc(all);
    change_view_pnj(all);
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_clear(WINDOW, sfBlack);
        init_view(all);
        event(all);
        all_animation(all);
        draw_all(all);
        change_player_dress(all);
        if (FIGHT->fight1 == in_fight)
            sfRenderWindow_setView(WINDOW, VIEW_DEFAULT(WINDOW));
        sfRenderWindow_display(WINDOW);
    }
    destroy_all(all);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp("-h", av[1]) == true) {
        print_usage();
        return (0);
    } else
        game_loop();
    return (0);
}
