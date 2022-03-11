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
	
	print("Size of char: %lu bytes", (unsigned long)sizeof(i));
	print("Size of int: %lu bytes", (unsigned long)sizeof(j));
	print("Size of long int: %lu bytes", (unsigned long)sizeof(k));
	print("Size of long long: %lu bytes", (unsigned long)sizeof(l));
	print("Size of float: %lu bytes", (unsigned long)sizeof(m));
	return (0);
}
