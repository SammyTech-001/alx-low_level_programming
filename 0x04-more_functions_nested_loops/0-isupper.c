#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: return 1 for uppercase and 0 for any other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
