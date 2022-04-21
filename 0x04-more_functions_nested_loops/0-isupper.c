#include "main.h"

/**
 *
 * _isupper - fun
 * @c: int
 *
 * Return: 0 or 1
*/

int _isupper(int c)
{

	char text = 'A';
	int isupper = 0;

	for (; text <= 'Z'; text++)
	{
		if (c == text)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
