#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination char string
 * @src: source char string
 * Return: pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	do
	{
		i++;
	}while(d[i] != '\0');
	do
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
