SERVER_FILES = server.c minitalk_utils.c
SERVER_OBJ = $(SERVER_FILES:.c=.o)

CLIENT_FILES = client.c minitalk_utils.c
CLIENT_OBJ = $(CLIENT_FILES:.c=.o)

all: SERVER CLIENT

SERVER: $(SERVER_FILES)
	gcc -Wall -Wextra -Werror -o server $(SERVER_FILES) minitalk.h
CLIENT: $(CLIENT_FILES)
	gcc -Wall -Wextra -Werror -o client $(CLIENT_FILES) minitalk.h

clean: 
	rm -f $(SERVER_OBJ) $(CLIENT_OBJ)

fclean: 
	rm -f server client

re: fclean all

.PHONY:	all clean fclean re