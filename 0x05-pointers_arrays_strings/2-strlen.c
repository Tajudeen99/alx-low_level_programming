#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function that determines length of string
 * @s: a pointer for counting the length
 * Return: int i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
