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
	char low;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
