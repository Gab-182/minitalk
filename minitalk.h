#ifndef MINITALK_H
# define MINITALK_H
#define _POSIX_SOURCE

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

# include "./ft_printf/ft_printf.h"

int		server();
int		client(int pid);

#endif