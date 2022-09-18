#include "main.h"

/**
* print_last_digit - A function that prints last digit
* @n: takes in an integer
* Return: result output
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		(n = -1 * n);
		(n = n % 10);
		_putchar ('0' + n);
	}
	else
	{
		(n = n  % 10);
		_putchar ('0' + n);
	}
	return (n);
}
