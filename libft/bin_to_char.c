#include "libft.h"

void	bin_to_char(char *bin)
{
	int result = 0;
	int i;
	
	for (i = 0; bin[i] != '\0'; i++)
	{
		result <<= 1;// Shift the values in result left once.  Same ase
					 // result *= 2;
					 // if bin[i] == '0', we don't do anything.
		if (bin[i] == '1')
		{
			result += 1;
		}
	}
	ft_putchar(result);
}