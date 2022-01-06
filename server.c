/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:27:24 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/06 19:39:34 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	ft_putstr("The server's PID is: ");
	green();
	ft_putnbr(getpid());
	reset();
	ft_putstr("\n\nWaiting for the client message: \n\n");
}