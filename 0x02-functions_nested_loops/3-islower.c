#include "main.h"

/**
 * _islower - returns 1 if an alphabet is lower, 0 if otherwise
 *
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

	return result;
}
