/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:35:07 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 16:07:08 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	red(void)
{
	ft_putstr("\033[1;31m");
}

void	yellow(void)
{
	ft_putstr("\033[1;33m");
}

void	green(void)
{
	ft_putstr("\033[0;32m");
}

void	reset(void)
{
	ft_putstr("\033[0m");
}

void	error(int i)
{
	if (i == 1)
	{
		red();
		ft_putchar('\n');
		exit(EXIT_FAILURE);
	}
	if (i == 2)
	{
		ft_putstr("ERROR, server not found!!!");
		ft_putchar('\n');
		exit(EXIT_FAILURE);
	}
}
