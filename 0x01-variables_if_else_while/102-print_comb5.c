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
		for (ten = (one = '0'); one <= '9'; one++)
		{
			for (t = ten; t <= '9'; t++)
			{
				for (o = (one + 1); o <= '9'; o++)
				{
					putchar(ten);
					putchar(one);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((ten == '9' && one == '8') &&
						(t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				one = '-1';
			}
		}
	}	

	putchar('\n');

	return (0);
}
