#include "main.h"

/**
 * _islower - returns 1 if an alphabet is lower, 0 if otherwise
 * @c: The input alphabet to be checked
 * Return: Nothing
 */
int _islower(int c)
{
	char i;
	int result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			result = 1;
	}

	return (result);
}
