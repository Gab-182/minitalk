/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:32:18 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/06 17:08:30 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
#define _POSIX_SOURCE

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

// int		server();
// int		client(int pid);
void    ft_putchar(int c);
void    ft_putstr(char *str);
void    ft_putnbr(int num);
void    green();
void    red();
void    orange();
void    reset();

#endif