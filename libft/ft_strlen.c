#include "libft.h"

size_t	ft_strlen(char *s)
{
	size_t	n ;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}