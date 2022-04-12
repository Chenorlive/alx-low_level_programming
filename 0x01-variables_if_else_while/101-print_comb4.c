#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start
 *
 * Return: 0
*/

int  main(void)
{
	int i;
	int c;
	int d;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			for (d = c + 1; d <= '9'; d++)
			{
				if ((c != i) != d)
				{
					putchar(i);
					putchar(c);
					putchar(d);

					if (i == '7' && c == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			{
		}
	}
	putchar('\n');

	return (0);
}
