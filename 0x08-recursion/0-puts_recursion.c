#include main.h
/**
 *
 * _puts_recursion - prints a string followed by a new line.
 * @s: pointer with the address of the string
 *
 * Return: Always o.
 */

void _puts_recurssion(char *s)

{
	int i = o;

	if(s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_put_recursion(&s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
