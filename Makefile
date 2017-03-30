##
## Makefile for my_yes in /home/exam/work/my_yes
## 
## Made by Vincent PARRES
## Login   <vincent.parres@epitech.eu>
## 
## Started on  Sat Mar 18 11:40:03 2017 Vincent PARRES
## Last update Thu Mar 30 17:56:11 2017 Miles PROWER
##

NAME	=	my_yes

CC	=	gcc

RM	=	rm -f

SRC	=	src/my_yes.c

CFLAGS	=	-W -Wall -Werror -pedantic

LDFLAGS	=	

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
