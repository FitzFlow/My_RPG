/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** rpg
*/

#ifndef RPG_H_
    #define RPG_H_
    #include "all.h"

typedef struct all_struct {
    window_t *window;
    game_state_t state_of_game;
    entity_t *cadre;
    menu_btn_t *menu_btn;
    my_music_t menu_music;
    player_t *player;
    sfView *view_player1;
    sfView *view_game;
    int change_draw;
    sfClock *clock_entity;
    sfClock *fight_clock;
    mob_t *pnj;
    npc_t **npc;
    menu_t *menu;
    game_t *game;
    phone_t *phone;
    filter_t *filter;
    menu_pause_t *menu_pause;
    pause_game_t game_pause;
    select_player_t *select_player;
    entity_t **car_of;
    interior_t interior;
    interior_enum_t interior_enum;
    sfClock *timer;
    int restart;
    bool in_player_house;
    mission_t *mission;
    fight_t *fight;
    lean_bottle_t **lean;
} all_t;

void print_usage(void);

all_t *load_all_struct(void);
void destroy_all(all_t *all);

void draw_all(all_t *all);

void animate_back_button(all_t *all);

int is_on_sprite(sfSprite *sprite, sfRenderWindow *window);
int is_on_circle(sfSprite *sprite, sfCircleShape *circle);

sfView *my_create_view(sfRenderWindow *window, sfVector2f pos,
sfVector2f size);

char **get_file_in_array(const char *filepath);

bool check_colision(sfVector2f pos, sfImage *filter, int *);

bool phouse_collision_right(all_t *all, sfVector2f pos, sfImage *filter);
bool phouse_collision_left(all_t *all, sfVector2f pos, sfImage *filter);
bool phouse_collision_up(all_t *all, sfVector2f pos, sfImage *filter);
bool phouse_collision_down(all_t *all, sfVector2f pos, sfImage *filter);

int random_number(void);

void set_in_inventory(all_t *all);

int is_on_sprite_hud(sfRenderWindow *window, int dist, sfVector2f pos);
int is_on_square_sprite_hud(sfRenderWindow *window, sfVector2f pos,
sfVector2f s_size);

void draw_text(sfRenderWindow *renderWindow, const sfText *object,
const sfRenderStates *states);
void draw_array_text(sfRenderWindow *renderWindow, const sfText **object,
const sfRenderStates *states);

void anim_guy(all_t *all);

void hud_sprite_pos(all_t *all);

int dist_btw_point(sfVector2f pos1, sfVector2f pos2);
void init_view(all_t *all);

void animate_inventory_btn(all_t *all);

void interact_grown_button(all_t *all);
void animate_button(all_t *all, entity_t *sprite, int left,
sfVector2f pos);
void animate_button_hud(all_t *all, sfVector2f *pos_size, entity_t *sprite,
int left);

int init_path_for_(void);

sfCircleShape *create_circle(sfVector2f pos, float radius, sfColor color);
void draw_circle(sfRenderWindow *renderWindow, const sfCircleShape *object,
const sfRenderStates *states);

int animation_camera(int dist, sfView *view, sfVector2f end, sfVector2f sens);

void animate_first_button(all_t *all);
void interact_with_button(all_t *all);

void interact_with_tuto(all_t *all);
void interact_with_back_tuto(all_t *all);

bool check_x(sfVector2f pos, sfVector2f sens, sfImage *filter, int *change_d);
bool check_y(sfVector2f pos, sfVector2f sens, sfImage *filter, int *change_d);
bool check_up(sfVector2f pos, sfImage *filter, int *change_draw);
void game_collision(all_t *all, sfImage *img);
bool check_collision_up(sfVector2f pos, sfImage *filter, int *change_draw);
bool check_collision_down(sfVector2f pos, sfImage *filter, int *change_draw);
bool check_collision_left(sfVector2f pos, sfImage *filter, int *change_draw);
bool check_collision_right(sfVector2f pos, sfImage *filter, int *change_draw);

bool check_resize_right(sfVector2f pos, sfImage *filter,
int *change_draw, int i);
bool check_resize_left(sfVector2f pos, sfImage *filter,
int *change_draw, int i);
bool check_resize_up(sfVector2f pos, sfImage *filter,
int *change_draw, int i);
bool check_resize_down(sfVector2f pos, sfImage *filter,
int *change_draw, int i);

void resize_interaction(all_t *all, sfVector2f player_pos);

void load_all_pt2(all_t *all);

/*     PNJ     */
void init_pnj_and_npc(all_t *all);
npc_t **init_npc(char *cfg_folder);
void spawn_pnj(all_t *all);
void optimizing_pnj_detection(all_t *all);

void anim_all_npc(npc_t *npc, all_t *all, int direction);
void draw_my_npc(all_t* all, npc_t* pnj);
void draw_pnj_behind(all_t *all);
void draw_pnj_front(all_t *all);
void move_pnj(all_t *all, npc_t *john, sfVector2f sens, int direction);

/*    MENU SELECTION    */
void load_player_menu(all_t *all);
void draw_selection_player(all_t *all);
void man_player_select(all_t *all);
void girl_player_select(all_t *all);

/*    MENU PAUSE    */
void load_pause_menu(all_t *all);
void set_in_pause(all_t *all);
void pause_sprite_pos(all_t *all);
void move_pause_menu(all_t *all);
void animate_pause_btn(all_t *all);
void draw_pause(all_t *all);

/*    MISSION    */
void mission_1(all_t *all, npc_t *john);
void mission_2(all_t *all, npc_t *john);
void mission_3(all_t *all, npc_t *luidji);
void mission_4(all_t *all, npc_t *freeze);
void mission_5(all_t *all);
void draw_lean_bottle(all_t *all);
void get_lean_bottle(all_t *all);
void start_mission(all_t *all, npc_t *npc,
sfVector2f sens_cam, sfVector2f sens_npc, int direction);
void end_mission(all_t *all, npc_t *npc, sfVector2f pos);
void fight(all_t *all, npc_t *npc, mission_e *ptr_mission);
void mission_camera_animation(int dist, all_t *all, sfVector2f dest,
sfVector2f sens);
int interaction_is_finish(all_t *all, npc_t *npc);

/*    PHONE    */
void load_phone(all_t *all);
void draw_phone(all_t *all);
void phone_animation(all_t *all);
void phone_sprite_pos(all_t *all);

/*    PLAYER    */
void player_interaction(all_t *all);
void animate_player1(all_t *all);
void animate_player2(all_t *all);
int move_player(all_t *all);
void change_player_dress(all_t *all);
void movement(all_t *all);

/*    MUSIC    */
void play_music(all_t *all);

/*    FIGHT    */
void fight_system(all_t *all, unsigned int *plr_life, unsigned int *enmy_life);
void fight_clock_damage(all_t *all, unsigned int *player_life, int effect);
int resize_attack(all_t *all, unsigned int *player_life, int nb);
int ddos_resize(all_t *all, unsigned int *ennemy_life);
int mitm_resize(all_t *all, unsigned int *ennemy_life);
int sql_resize(all_t *all, unsigned int *ennemy_life);
int brute_resize(all_t *all, unsigned int *ennemy_life);
void fight_text(all_t *all);
void drax_text_fight(all_t *all);
void draw_fight_sprite(all_t *all);
void animate_button_fight(all_t *all, entity_t *sprite, int left);

/*    HOUSE    */
void load_interior(all_t *all);
void draw_interior_house(all_t *all);
void draw_interaction_player_house(all_t *all);
void interact_with_player_house(all_t *all);
void interact_with_player_house_resize(all_t *all, sfVector2f player_pos);
void change_boy(all_t *all);
void change_dress(all_t *all);

/*    MENU    */
void load_menu(all_t *all);
void draw_main_menu(all_t *all);
void animate_menu_btn(all_t *all);
void draw_selection_and_tuto(all_t *all);
void main_menu_interaction(all_t *all);

/*    GAME    */
void load_game(all_t *all);
void load_filter(all_t *all);
void draw_map_behind(all_t *all);
void draw_map_in_front_of(all_t *all);
void zoom_mini_map(all_t *all);
void event(all_t *all);

/*    CAR    */
void move_car_one_1(all_t *all);
void move_car_five_5(all_t *all);
void load_car(all_t *all);
void clock_car(all_t *all);
void draw_car(all_t *all);
void move_car(all_t *all);
void move_car_zero(all_t *all);
void move_car_one(all_t *all);
void move_car_two(all_t *all);
void move_car_three(all_t *all);
void move_car_four(all_t *all);
void move_car_five(all_t *all);
void move_car_six(all_t *all);
void dont_touch_me(all_t *all);
void move_car_seven(all_t *all);

#endif
