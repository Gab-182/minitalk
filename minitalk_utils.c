#include "minitalk.h"

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