#include <stdio.h>

/**
 * main - function entry point.
 * Return: always 0 (success).
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');
	return (0);
}
