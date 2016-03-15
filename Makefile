# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubarbie <jubarbie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/30 16:51:35 by jubarbie          #+#    #+#              #
#    Updated: 2016/03/11 15:42:18 by jubarbie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-I Includes -Wall -Wextra -Werror
SRC=	Sources/main.c \
		Sources/init.c \
		Sources/build.c \
		Sources/tetri_moves.c \
		Sources/fillit.c
OBJ=$(SRC:.c=.o)
LIBS =Libs
NAME=fillit

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -L$(LIBS) -lft -o $@ $^
	
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
