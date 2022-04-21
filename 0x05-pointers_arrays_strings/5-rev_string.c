#include "main.h"

/**
 * print_rev - print the reverse of str
 * @*s: of char
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);
}
