#include <stdio.h>

/**
 * main - prints the numbers from 1 t0 100, But for multiples of three
 * print fizz instead of the number and for the multiples of five print Buzz.
 * for numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			putchar("Buzz");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			putchar("FizzBuz ");
		else if ((i % 3) == 0)
			putchar("Fizz ");
		else if ((i % 5) == 0)
			putchar("Buzz ");
		else
			putchar("%d ", i);
	}
	putchar("\n");
	return (0);
}
