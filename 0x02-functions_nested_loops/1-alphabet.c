#include"main.h"

/**
 * The main - it's an entry point
 *
 * Return: always returns 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
