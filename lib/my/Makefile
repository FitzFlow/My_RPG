##
## EPITECH PROJECT, 2021
## B-CPE-100-RUN-1-1-cpoolday10-idriss.said
## File description:
## Makefile
##

SRC= $(wildcard *.c)

OBJ= $(SRC:.c=.o)

all: $(OBJ)
	ar rc libmy.a *.o
	cp *.h ../../include/

clean:
	rm *.o || true

fclean: clean
	rm libmy.a || true
