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

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			if (c != i)
			{
				putchar(i);
				putchar(c);

				if (i == '8' && c == '9')
					continue;

				putchar(',');
				putchar(' ');
			{
		}
	}
	putchar('\n');

	return (0);
}
