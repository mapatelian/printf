#include "holberton.h"
/**
* print_char - formats a char
* @valist: argument from valist in _printf
*
* Return: nothing
*/
int print_char(va_list valist)
{
	int c;

	/* initializes c as argument from _printf valist */
	c = va_arg(valist, int);

	return (_putchar(c));
}
