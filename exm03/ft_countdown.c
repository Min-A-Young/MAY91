#include <unistd.h>

void	ft_countdown(void)
{
	char a = '9';

	while (a >= '0')
	{
		write(1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	ft_countdown();
}
