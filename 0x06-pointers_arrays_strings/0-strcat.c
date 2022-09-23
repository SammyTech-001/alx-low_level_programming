#include "main.h"

/**
 * _strcat - strcat concatenates a string to another
 * @dest: sstring to append by src
 * @src: string to append for dest
 *
 * Return: address of dest
 */
 
char *_strcat(char *dest, char *src)
{
        int count = 0, count2 = 0;
	
	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
