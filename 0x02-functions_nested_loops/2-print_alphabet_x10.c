#include "main.h"

/**
 * main - print out alphabet in numbers of 10 (10 times)
 * Description: prints out alphabets in numbers of 10 each
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
