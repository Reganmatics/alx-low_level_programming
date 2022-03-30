/**
 * _puts_recursion - outputs contents of a string
 * @s: string to output
 * Return: always 0 and indicator of success.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_putchar(*s);
		s++;
		_puts_recursion(s);
}
