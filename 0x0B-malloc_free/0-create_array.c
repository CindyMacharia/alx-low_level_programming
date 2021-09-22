#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it witha specific char
 * @size: The size of the memory allocated
 * @c: The arrays of char
 *
 *Return: pointer to char
 */
char *create_array(unsigned int size, char c)}
{
	char *p;
	unsigned int x;

	if (size == 0)
	
		return ('\0');
	
	p = malloc(size * sizeof(char));
	if (p == '\0')
		return ('\0');

	for (x = 0; x < size; x++)
	{
		p[x] = c;

	return (p);
}
