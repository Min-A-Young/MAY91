#include <unistd.h>

void only_z(void)
{
	char letter = 'z';
	write(1, &letter, 1);
	write(1, "\n", 1);
}

int main(void)
{
	only_z();
}
