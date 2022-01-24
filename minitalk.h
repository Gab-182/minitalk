/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:35:03 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 16:38:54 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/types.h>

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char s2);
void	bin_to_char(char *bin);
int		ft_atoi(const char *str);
void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);
void	error(int i);

#endif