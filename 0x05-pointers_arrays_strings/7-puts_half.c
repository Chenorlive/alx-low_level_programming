#include "main.h"
#include <string.h>

/**
 * puts_half - a func that print half of str input
 * @str: input of string
 * Return: nothing
*/

void puts_half(char *str)
{
	int half, len, i = 0;

	len = strlen(str);

	if (len % 2 != 0)
		half = len - 1 / 2;
	else
		half = len / 2;

	for(i = half; i <= len; i++)
		_putchar(str[i]);

}
