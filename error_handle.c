/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:35:07 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 16:39:54 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(int i)
{
	if (i == 1)
	{
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
