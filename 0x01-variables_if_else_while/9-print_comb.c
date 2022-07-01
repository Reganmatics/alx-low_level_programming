#include <stdio.h>

/**
 * main - this is the entry point for the Main function.
 * Return: this  is always 0 (successful).
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
