#include <stdio.h>

/**
  * main - Print alphabets in reverse
  * Return: Always 0
  */
int main(void)
{
	char tj;

	for (tj = 'z'; tj >= 'a'; tj--)
		putchar(tj);

	putchar('\n');

	return (0);
}
