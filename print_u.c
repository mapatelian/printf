#include "holberton.h"

/**
 * print_u - prints unsigned int
 *
 * @n: number to be printed
 *
 * Return: number of digits
 */

void print_u(int n)
{

	unsigned int number;

	number = n;
	/* checks if number has a negative sign and prints it */
	if (n < 0)
	{
		number = -n;
	}

	else
	{
		number = n;
	}

	/* checks if n is greater than 10 and calls function recursively if so*/

	if (number / 10)
		print_int(number / 10);
	/* prints number */

	_putchar((number % 10) + '0');
}
