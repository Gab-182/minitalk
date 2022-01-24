/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:34:48 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 16:41:05 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binery_converter(int pid, char *str, int len)
{
	int	i;
	int	bin;

	i = 0;
	while (i <= len)
	{
		bin = 7;
		while (bin >= 0)
		{
			if ((str[i] >> bin) & 1)
			{
				if (kill(pid, SIGUSR1) == -1)
					error(2);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					error(2);
			}
			bin--;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	pid = ft_atoi(argv[1]);
	if (argc < 3 || argc > 3)
	{
		ft_putstr("Error, Usage: ./client <server PID> <string>");
		error(1);
	}
	if (pid > 2147483647 || pid <= 0)
	{
		ft_putstr("Error, PID is not valid, ");
		error(1);
	}
	binery_converter(pid, argv[2], ft_strlen(argv[2]));
	return (EXIT_SUCCESS);
}
