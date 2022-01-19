# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 11:05:39 by gabdoush          #+#    #+#              #
#    Updated: 2022/01/19 00:33:14 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =  ft_atoi\
	 ft_putchar\
	 ft_putstr\
	 ft_putnbr\
	 ft_strjoin\
	 bin_to_char\
	 ft_strlen

OBJECTS =	$(FILES:.c=.o)


HEADERS = libft.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
