/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:34:52 by gabdoush          #+#    #+#             */
/*   Updated: 2022/05/10 15:56:55 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/*----------------------------------------------------------------------------*/
void	give_id(void)
{
	pid_t	id;

	id = getpid();
	if (id < 0)
	{
		ft_putstr("Error, Failed to give ID to the server.");
		error(1);
	}
	ft_putstr("Server PID is : ");
	ft_putnbr(id);
	ft_putchar('\n');
}

/*----------------------------------------------------------------------------*/
void	handler(int c)
{
	static int	letter;
	static int	i = 7;

	if (c == SIGUSR1)
		letter |= (1 << i);
	i--;
	if (i == -1)
	{
		ft_putchar(letter);
		i = 7;
		letter = 0;
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

/*----------------------------------------------------------------------------*/