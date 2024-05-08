#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
	}	
	else
	{
		c = 'P';
	}
	ft_putchar(c);
}
