#include "0-object_like_macro.h"
#include <stdio.h>
#define SIZE 1024

/**
 * main - Create a header file that defines a macro named SIZE
 *@ SIZE as an abbreviation for the token 1024.
 *
 * Return: Always 0.
 */
 int main(void)
 {
    int s;
 
    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
 }
