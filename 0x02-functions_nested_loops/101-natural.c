#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, sum =0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 5) == 0 || (x % 3) == 0)
			sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
