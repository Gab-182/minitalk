/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:35:39 by gabdoush          #+#    #+#             */
/*   Updated: 2022/01/24 14:35:40 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char s2)
{
	size_t	i;
	size_t	new_str_len;
	char	*new_str;

	i = 0;
	new_str_len = ft_strlen(s1) + 1;
	new_str = (char *)malloc(new_str_len + 1);
	if (!s1 || !new_str)
		return (0);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = s2;
	i++;
	new_str[i] = '\0';
	return (new_str);
}
