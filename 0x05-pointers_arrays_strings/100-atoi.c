#include <stdio.h>

/**
 * _atoi -- func that conver str to int
 * @s: input string
 * Return: int value
*/

int _atoi(char *s)
{
	int ss = 1;
	unsigned int tt = 0;
	char nf = 0;

	while (*s)
	{
		if (*s == '-')
			ss *= -1;

		if (*s >= '0' && *s <= '9')
		{
			nf = 1;
			tt = tt * 10 + *s - '0';
		}

		else if (nf)
			break;
		s++;
	}

	if (ss < 0)
		tt = (-tt);

	return (tt);
}
