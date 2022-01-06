# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 09:55:02 by gabdoush          #+#    #+#              #
#    Updated: 2022/01/06 17:07:15 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a

FILES =  server.c\
		 client.c\
		 minitalk_utils.c\
		 colores.c

OBJECTS =	$(FILES:.c=.o)

HEADERS = minitalk.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

.PHONY:	all clean fclean re
