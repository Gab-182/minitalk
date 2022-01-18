#include "minitalk.h"

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr("-2147483648");
		ft_putchar('-');
		n = n * -1;
	}
	if (n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	red()
{
	printf("\033[1;31m");
}

void	yellow(void)
{
	printf("\033[1;33m");
}

void	green(void)
{
	printf("\033[0;32m");
}

void	reset(void)
{
	printf("\033[0m");
}

void	error(void)
{
	red();
	printf("ERROR\n");
	exit(EXIT_FAILURE);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

size_t	ft_strlen(char *s)
{
	size_t	n ;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}

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