#include <unistd.h>

void	maff_alpha(void)
{
	char letter1 = 'a';
	char letter2 = 'B';

	while (1)
	{
		if (letter2 == 'Z')
		{
			write(1, "yZ", 2);
			break;
		}
		else
		{
			write(1, &letter1, 1);
			write(1, &letter2, 1);
			letter1 += 2;
			letter2 += 2;
		}

	}
	write(1, "\n", 1);
}

int main(void)
{
	maff_alpha();
}
