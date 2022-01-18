#include "minitalk.h"

void give_id()
{
	pid_t id;

	id = getpid();
	if (id < 0)
	{
		red();
		printf("Failed to give ID to the server.\n");
		error();
	}
	printf("Server PID is :\n");
	yellow();
	printf("%d\n", id);
	reset();
}

void	handler(int c)
{
	char		b;
	static int	i;
	static char *bin;

	if (!bin)
	{
		bin = (char *)malloc(1);
		i = 0;
	}
	if (c == SIGUSR1)
		b  = '1';
	if (c == SIGUSR2)
		b = '0';
	i++;

	if (i <= 8)
	{
		bin = ft_strjoin(bin,b);
		if (i == 8)
			bin_to_char(bin);
	}
	if (i > 7)
	{
		i = 0;
		free(bin);
		bin = NULL;
	}
}

int main()
{
	give_id();
	while (1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (EXIT_SUCCESS);
}