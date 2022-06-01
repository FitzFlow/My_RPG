##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Makefile
##

LOAD	=	src/load/load_game.c \
			src/load/load_menu.c \
			src/load/load_phone.c \
			src/load/load_filter.c \
			src/load/load_pause_menu.c \
			src/load/load_player_menu.c \
			src/interior/init_interior.c \
			src/interior/enter_in_house.c \
			src/interior/enter_in_house2.c \

DRAW	=	src/draw/draw.c \
			src/draw/draw_text.c \
			src/draw/draw_all.c \
			src/draw/draw_car.c \
			src/draw/draw_map.c \
			src/draw/draw_pnj.c \
			src/draw/draw_pause.c \
			src/draw/draw_phone.c \
			src/draw/draw_interior_house.c

PHONE_ANIMATION	=	src/phone_animation/phone_animation.c

ALL_EVENT	=	src/all_event/movement.c \
				src/all_event/movement2.c \
				src/all_event/movement3.c \
				src/all_event/get_event.c \
				src/all_event/window_event.c \
				src/all_event/zoom_mini_map.c \
				src/all_event/animation_camera.c \
				src/all_event/set_game_in_pause.c

CREATE_STRUCTURE	=	src/create_structure/create_music.c \
						src/create_structure/create_sprite.c

CREATE_WINDOW	=	src/create_window/print_usage.c \
					src/create_window/create_window.c

MAIN_MENU	=	src/menu/main_menu/animate_button.c \
				src/menu/main_menu/draw_main_menu.c \
				src/menu/main_menu/draw_main_menu2.c \
				src/menu/main_menu/interact_button.c \
				src/menu/main_menu/interact_button2.c \
				src/menu/main_menu/select_player_menu.c \
				src/menu/main_menu/animate_hud_button.c \
				src/menu/main_menu/interact_button/interact_pause_button.c

PLAYER	=	src/player/init_player.c \
			src/player/animation_player.c \
			src/player/change_player_dress.c

ENTITY	=	src/entity/set_pnj.c \
			src/entity/init_pnj.c \
			src/entity/move_npc.c \
			src/entity/spawn_pnj.c \
			src/entity/anime_npc.c \
			src/entity/create_clock.c \
			src/move_car/create_car.c \
			src/move_car/create_car2.c \
			src/move_car/create_car3.c \
			src/move_car/create_car4.c

OTHER	=	src/destroy.c \
			src/destroy_bis.c\
			src/destroy_cis.c\
			src/collision.c \
			src/play_music.c \
			src/all_struct.c \
			src/all_struct2.c \
			src/create_text.c \
			src/calcul_dist.c \
			src/create_view.c \
			src/is_on_sprite.c \
			src/create_circle.c \
			src/random_number.c \
			src/get_file_in_array.c \
			src/get_pnj_in_the_list.c

DIALOG	=	src/dialog/init_dialog.c \
			src/dialog/load_font.c

MISSION =   src/mission/mission_1/mission1.c \
			src/mission/mission_2/mission2.c \
			src/mission/mission_3/mission3.c \
			src/mission/mission_4/mission4.c

FIGHT = 	src/fight_system/init_fight_scene.c \
			src/fight_system/fight_system.c \
			src/fight_system/fight_system2.c \
			src/fight_system/fight_system3.c \
			src/fight_system/button_interraction.c

ASSETS = 	src/game_assets/init_game_assets.c

SRC	=	$(LOAD) \
		$(DRAW) \
		$(OTHER) \
		$(PLAYER) \
		$(ENTITY) \
		$(DIALOG) \
		$(ALL_EVENT) \
		$(MAIN_MENU) \
		$(CREATE_WINDOW) \
		$(PHONE_ANIMATION) \
		$(CREATE_STRUCTURE) \
		$(MISSION) \
		$(FIGHT) \
		$(ASSETS)

MAIN	=	my_rpg.c

OBJ = $(SRC:.c=.o)

M_OBJ = $(MAIN:.c=.o)

NAME = my_rpg

IFLAGS = -I include/
CFLAGS = -W -Wall -Werror -Wextra -g $(IFLAGS)
LFLAGS = -L lib/my/ -lmy -lm
FLAGSCSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: $(NAME)

$(NAME): $(OBJ) $(M_OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(IFLAGS) $(OBJ) $(M_OBJ) $(LFLAGS) $(FLAGSCSFML)

clean:
	make -C ./lib/my clean
	rm -f $(OBJ)
	rm -f $(M_OBJ)
	rm -f *~

val:
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(SRC) $(LFLAGS) -g -g3

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)

re : fclean all