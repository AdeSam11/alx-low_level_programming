#include "main.h"

/**
 * _abs - see description
 * Description: a function that computes the absolute value of an integer
 * @x: the input integer
 * Return: absolute value of the integer
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else
		return (x * -1);
}
