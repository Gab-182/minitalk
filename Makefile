# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 14:35:11 by gabdoush          #+#    #+#              #
#    Updated: 2022/01/24 16:40:10 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = server
Name2 = client

SERVER_FILES = server.c \
			   error_handle.c

CLIENT_FILES = client.c \
			   error_handle.c

SERVER_OBJ = $(SERVER_FILES:.c=.o)

CLIENT_OBJ = $(CLIENT_FILES:.c=.o)

INCLUDES = ./libft/libft.h \
		   ./minitalk.h

LIBFT = ./libft/libft.a

CFLAGS = -Wextra -Werror -Wall

CC = gcc

all: $(Name) $(Name2)

$(Name): $(SERVER_OBJ)
	make -C ./libft
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling Server Files:\033[0m" $<
	$(CC) $(SERVER_OBJ) $(LIBFT) -o server

$(Name2): $(CLIENT_OBJ)
	@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling Client Files:\033[0m" $<
	$(CC) $(CLIENT_OBJ) $(LIBFT) -o client
	@printf "\033c"
	@printf "\n\n\033[0;33m --------------- MiniTalk ------------------ \033[0m \n\n"

clean:
	make -C ./libft clean
	@echo "\033[0m       \033[0;33m Cleaning minitalk objects...\033[0m" $<
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ)

fclean: clean
	make -C ./libft fclean
	@echo "\033[0m       \033[0;33m fcleaning minitalk excutable files...\033[0m" $<
	rm -f server client

re: fclean all

.PHONY:	all clean fclean re