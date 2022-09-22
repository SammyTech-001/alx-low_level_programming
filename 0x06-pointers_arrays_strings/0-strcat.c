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
        int i, j;
	
	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
