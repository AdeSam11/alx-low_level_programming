#include "main.h"

/**
 * _isdigit - A function that checks if an input is a digit
 * @c: An input integer
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int result = 0;

	if (_isalpha(c) == 0)
	{
		result = 1;
	}
	return (result);
}
