#include "main.h"
/**
 * _isdigit - checks an argument to see if the number passed to it is a digit number or not
 * @value: argumet to be checked 
 * Return: returns 1 if successful or 0 if otherwise
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
