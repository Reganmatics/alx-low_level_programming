#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * get_endianness - checks the endianness
 * a77d10a15e5d1a12b1b493c9797b66598eaab382
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);

	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
