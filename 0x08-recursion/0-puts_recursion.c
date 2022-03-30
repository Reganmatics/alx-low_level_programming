/**
 * _puts_recursion - outputs contents of a string
 * @s: string to output
 * Return: always 0 and indicator of success.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
