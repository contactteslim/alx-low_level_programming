#include <stdio.h>

/**
 * main - A program that prints double numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			int i1 = i / 10;
			int i2 = i % 10;
			int j1 = j / 10;
			int j2 = j % 10;

			if (i < j)
			{
				putchar(i1 + '0');
				putchar(i2 + '0');
				putchar(' ');
				putchar(j1 + '0');
				putchar(j2 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
