#include "main.h"

/**
* print_last_digit - A function that prints last digit
* @n: takes in an integer
* Return: result output
*/
int print_last_digit(int)
{
	int ln = n % 10;

	if (n = 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
