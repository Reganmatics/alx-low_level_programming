#include <stdio.h>
/**
 * main - entry point.
 * Return: always 0 (success).
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long l;
	float m;

	printf("Size of char: %lu bytes", (unsigned long)sizeof(i));
	printf("Size of int: %lu bytes", (unsigned long)sizeof(j));
	printf("Size of long int: %lu bytes", (unsigned long)sizeof(k));
	printf("Size of long long: %lu bytes", (unsigned long)sizeof(l));
	printf("Size of float: %lu bytes", (unsigned long)sizeof(m));
	return (0);
}
