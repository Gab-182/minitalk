#include "libft.h"

void	bin_to_char(char *bin)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (bin[i] != '\0')
	{
		result <<= 1;
		if (bin[i] == '1')
		{
			result += 1;
		}
		i++;
	}
	ft_putchar(result);
}
/*
	Shift the values in result left once.  Same ase
	result *= 2;
	if bin[i] == '0', we don't do anything.
*/