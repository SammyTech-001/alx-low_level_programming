#include "main.h"
#include <stdio.h>

/**
 * _strcat - strcat concatenates a string to another
 *
 * Return: always 0.
 */
char *_strcat(char *dest, char *src)
{
        char *dest[98] = "Hello ";
	char *src[] = "World!\0";

	/* concatenates dest and str */
	strcat( *dest, *src );
	putchar("%s\n", *dest );

	return (0);
}
