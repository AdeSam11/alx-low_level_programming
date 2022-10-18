#include "main.h"

/**
 * _isalpha - prints 1 if c is an alphabet, and 0 otherwise
 * @c: the input alphabet to be checked
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	char lower, upper;
	int result = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				result = 1;
		}
	}
	return (result);
}
