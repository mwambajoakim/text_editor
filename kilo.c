#include <unistd.h>

/**
 * main - Entry point function.
 *
 * Return: 0 is success.
 */

int main(void)
{
	char c;
	while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
	return (0);
}
