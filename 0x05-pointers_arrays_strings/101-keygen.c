#include "holberton.h"
#include <stdio.h>
#imclude <stdlib.h>

/**
 * main - Creates a program that generates random valid passwords for the program
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(0));
	int num = rand();

	printf("%i\n",num);
	return (0);
}
