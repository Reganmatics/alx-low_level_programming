/**
 * _puts_recursion - outputs contents of a string
 * @s: string to output
 * Return: always 0 and indicator of success.
 */

void _puts_recursion(char *s)
{
	int index = 0;

	while (s[index] == '\0')
		;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	_putchar('\n');
}
