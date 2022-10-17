#include <stdio.h>

/**
  * main - Prints the alphabet in lower case
  * followed by a new line, except q and e
  * Return: Always 0
  */

int main(void)
{
	char tj;

	for (tj = 'a'; tj <= 'z'; tj++)
	{
		if (tj != 'e' && tj != 'q')
			putchar(tj);
	}

	putchar('\n');

	return (0);
}
