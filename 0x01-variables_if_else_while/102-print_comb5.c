#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int ten;
	int o;
	int t;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			for (t = ten; t <= '9'; t++)
			{
				for (o = '0'; o <= '9'; o++)
				{
					if ((one < o) || (ten < t))
					{
						putchar(ten);
						putchar(one);
						putchar(' ');
						putchar(t);
						putchar(o);
						
						if (!(ten == '9' && one == '8' && t == '9' && o == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
