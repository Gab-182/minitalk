/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:34:52 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 16:13:51 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	give_id(void)
{
	pid_t	id;

	id = getpid();
	if (id < 0)
	{
		red();
		ft_putstr("Error, Failed to give ID to the server.");
		error(1);
	}
	ft_putstr("Server PID is : ");
	yellow();
	ft_putnbr(id);
	ft_putchar('\n');
	reset();
}

char	if_statements(int c)
{
	char	b;

	if (c == SIGUSR1)
		b = '1';
	if (c == SIGUSR2)
		b = '0';
	return (b);
}

void	handler(int c)
{
	char		b;
	static int	i;
	static char	*bin;

	if (!bin)
	{
		bin = (char *)malloc(1);
		i = 0;
	}
	b = if_statements(c);
	i++;
	if (i <= 8)
	{
		bin = ft_strjoin(bin, b);
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

int	main(void)
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
