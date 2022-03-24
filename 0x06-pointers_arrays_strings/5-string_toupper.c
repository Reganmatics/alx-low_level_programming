#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string input
 * Return: c (output string)
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
