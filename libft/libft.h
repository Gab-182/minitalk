/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:35:47 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 14:35:48 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int				ft_atoi(const char *str);
char			*ft_strjoin(char *s1, char s2);
void			ft_putchar(int c);
void			ft_putstr(char *s);
void			ft_putnbr(int n);
void			bin_to_char(char *bin);
size_t			ft_strlen(char *s);

#endif
