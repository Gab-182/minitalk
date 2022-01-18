#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/types.h>

// typedef struct s_msg
// {
//     char    *bin;
// 	char	letter;
// 	int     letter_size;
// }message_list;

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char s2);
void	bin_to_char(char *bin);
int     ft_atoi(const char *str);
void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);
void	red(void);
void	green(void);
void	yellow(void);
void	reset(void);
void    error();

#endif