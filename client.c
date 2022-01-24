#include "minitalk.h"

void    binery_converter(int pid, char *str, int len)
{
    int i;
    int bin;

    i = 0;
    while (i <= len)
    {
        bin = 7;
        while (bin >= 0)
        {
            if ((str[i] >> bin) & 1)
            {
                if (kill(pid, SIGUSR1) == -1)
                {
                    ft_putstr("ERROR, server not found!!!");
                    ft_putchar('\n');
                }
            }
            else
            {
                if (kill(pid, SIGUSR2) == -1)
                {
                    ft_putstr("ERROR, server not found!!!");
                    ft_putchar('\n');
                }
            }
            bin--;
            usleep(500);
        }
        i++;
    }
}

// void    handler(void)
// {
//     ft_putstr("Recived aproval from the server to start..");
//     ft_putchar('\n');
// }

int main(int argc, char **argv) 
{
    pid_t pid;

    pid = ft_atoi(argv[1]);
    if (argc < 3 || argc > 3)
    {
        red();
		ft_putstr("Error, Usage: ./client <server PID> <string>\n");
        error();
    }
	if (pid > 2147483647 || pid <= 0)
    {
        red();
		ft_putstr("Error, PID is not valid\n");
        error();
    }
    signal(SIGUSR1, handler);
    binery_converter(pid, argv[2], ft_strlen(argv[2]));
    return (EXIT_SUCCESS);
}