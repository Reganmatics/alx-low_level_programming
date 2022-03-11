#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point of the function.
 * Return: always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, abs(n) % 10);
	if (abs(n) % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (abs(n) % 10 == 0)
	{
		printf("and is 0\n");
	}
	else if (abs(n) % 10 < 6 && abs(n) % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
