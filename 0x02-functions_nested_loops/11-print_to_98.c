#include"main.h"

/**
 * print_to_98 - print n to 98 counts separated by comma, followed by spce and number should be printed in order
 *
 * @n: input
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
