#include<stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 number
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float n;

	printf("Size of a char: %lu byte(s)\n", sizeof(i));

	printf("Size of an int: %lu byte(s)\n", sizeof(j));

	printf("Size of a long int; %lu byte(s)\n", sizeof(k));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(m));

	printf("Size of a float: %lu byte(s)\n", sizeof(n));
	
	retun (0);
}
