#include <stdio.h>

/**
 * main - Print alphabets in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char tj;

	for (tj = 'a'; tj <= 'z'; tj++)
		putchar(tj);

	for (tj = 'A'; tj <= 'Z'; tj++)
		putchar (tj);

	putchar('\n');

	return (0);
}
