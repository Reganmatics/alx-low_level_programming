#include <stdio.h>

/**
 * main - entry point of the function.
 * Return: alswyas 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
