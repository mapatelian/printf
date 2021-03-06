#include "holberton.h"

/**
 * get_length_i - gets a length of a number
 *
 * @n: number to be checked
 *
 * Return: number of digits
 */

int get_length_i(int n)
{
	unsigned int count = n ? 1 : 0;
	unsigned int tr;

	if (n < 0)
		tr = -n;

	else
	{
		tr = n;
	}

	while (tr / 10)
	{
		tr = tr / 10;
		count++;
	}

	return (count);
}
