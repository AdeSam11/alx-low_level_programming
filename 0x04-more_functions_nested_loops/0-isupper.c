#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	char i;

	int result = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			result = 1;
		}
	}

	return (result);
}
