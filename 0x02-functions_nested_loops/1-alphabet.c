#include"main.h"

/**
 * The main - it's an entry point
 *
 * Return: return void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
