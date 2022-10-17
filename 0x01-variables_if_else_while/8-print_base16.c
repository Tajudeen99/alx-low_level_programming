#include <stdio.h>

/**
  * main - Print all numbers of base 16 in lower case
  * Return: Always 0
  */
int main(void)
{
	int num;
	char tj;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (tj = 'a'; tj <= 'f'; tj++)
		putchar(tj);

	putchar('\n');

	return (0);
}
