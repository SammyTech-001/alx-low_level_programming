#!/bin/bash
int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float n;

	printf("Size of a char: %lu byte(s)", sizeof(i));

	printf("Size of an int: %lu byte(s)", sizeof(j));

	printf("Size of a long int; %lu byte(s)", sizeof(k));

	printf("Size of a long long int: %lu byte(s)", sizeof(m));

	printf("Size of a float: %lu byte(s)", sizeof(n))
}
