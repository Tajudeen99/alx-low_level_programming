#include <unistd.h>

/**
 * main - program prints a string to
 * standard error
 *
 * Return: Always 0
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 90);
	return (0);
}
