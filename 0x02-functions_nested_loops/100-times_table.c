#include "main.h"

/**
 * print_times_table - check description
 * Description: a function that prints the n times table, starting with 0
 * @n: the input number
 * Return: Nothing
 */
void format_func(int n);

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				format_func(i * j);
			_putchar('\n');
		}
	}
}

/**
 * format_func - see description
 * @n: input number to format
 * Description: formats character to output
 * Return: Nothing
 */
void format_func(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
