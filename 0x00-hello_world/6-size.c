#include <stdio.h>

/**
  *main - Print the size of various data types
  *
Return: 0, if successful
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	/* sizeof evaluates the size of a variable*/
	printf("Size of char: %zu byte\n", sizeof(a));
	printf("Size of int: %zu byte\n", sizeof(b));
	printf("Size of long int: %zu byte\n", sizeof(c));
	printf("Size of long lond int: %zu byte\n", sizeof (d));
	printf("Size of float: %zu byte\n", sizeof(e));

	return (0);
}
