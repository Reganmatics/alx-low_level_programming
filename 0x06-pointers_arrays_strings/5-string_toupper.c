#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string input
 * Return: c (output string)
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
