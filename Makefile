# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prosnobl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 09:04:50 by prosnobl          #+#    #+#              #
#    Updated: 2017/11/19 15:12:26 by prosnobl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o
CC = gcc
	  
all : $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c

$(NAME) :
	$(CC) -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
