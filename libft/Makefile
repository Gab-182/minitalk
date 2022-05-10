# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 14:35:54 by gabdoush          #+#    #+#              #
#    Updated: 2022/05/10 15:25:54 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =  ft_atoi\
	 ft_putchar\
	 ft_putstr\
	 ft_putnbr\
	 ft_strlen\

OBJECTS =	$(FILES:.c=.o)


HEADERS = libft.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	@echo "\033[0m       \033[0;33m Cleaning libft objects...\033[0m" $<
	rm -f $(OBJECTS)

fclean: clean
	@echo "\033[0m       \033[0;33m fcleaning libft archive...\033[0m" $<
	rm -f  $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
