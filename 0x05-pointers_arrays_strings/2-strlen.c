#include <stdio.h>

int _strlen(char *);

/**
 * _strlen - returns the length of a string.
 * @s: array with the characters of the word
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
