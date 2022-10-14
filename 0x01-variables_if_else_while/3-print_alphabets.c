#include <stdio.h>

/**
 * main - Print lowercases and uppercases a-zA-Z followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low = low + 1;
	}

	while (upp <= 'Z')
	{
		putchar(upp);
		upp = upp + 1;
	}
	putchar('\n');

	return (0);
}
