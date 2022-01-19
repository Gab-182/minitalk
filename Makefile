Name = server
Name2 = client

SERVER_FILES = server.c \
			   minitalk_utils.c

CLIENT_FILES = client.c \
			   minitalk_utils.c

SERVER_OBJ = $(SERVER_FILES:.c=.o)

CLIENT_OBJ = $(CLIENT_FILES:.c=.o)

INCLUDES = ./libft/libft.h \
		   ./minitalk.h

LIBFT = ./libft/libft.a

CFLAGS = -Wextra -Werror -Wall

CC = gcc $(CFLAGS)

all: $(Name) $(Name2)

$(Name): $(SERVER_OBJ)
	make -C ./libft
	$(CC) $(SERVER_OBJ) $(INCLUDES) $(LIBFT) -o server

$(Name2): $(CLIENT_OBJ)
	$(CC) $(CLIENT_OBJ) $(INCLUDES) $(LIBFT) -o client

clean:
	make -C ./libft clean
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ)

fclean:
	make -C ./libft fclean
	rm -f server client

re: fclean all

.PHONY:	all clean fclean re