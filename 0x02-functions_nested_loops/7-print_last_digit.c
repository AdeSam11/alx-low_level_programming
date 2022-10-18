#include "main.h"

/**
 * print_last_digit - check description
 * Description: a function that prints the last digit of a number.
 * @x: the input number
 * Return: last digit of x
 */
int print_last_digit(int x)
{
	int y;

	if (x > 0)
		y = x % 10;
	else
		y = -1 * (x % 10);
	_putchar((y % 10) + '0');
	return (y % 10);
}
