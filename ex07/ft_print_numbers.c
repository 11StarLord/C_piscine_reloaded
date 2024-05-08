#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	n;
	
	n = '0';
	while(n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
