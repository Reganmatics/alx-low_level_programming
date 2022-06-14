#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination char string
 * @src: source char string
 * Return: pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int src_index = 0;
	int dest_len = 0;

	while (dest[src_index++])
		dest_len++;
	for (src_index = 0; src[src_index]; src_index++)
		dest[dest_len++] = src[src_index];
	return (dest);
}
