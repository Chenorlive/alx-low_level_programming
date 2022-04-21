#include <string.h>

/**
 * _strlen - leng  of string
 * @*s: of char
 * Return: int
*/

int _strlen(char *s)
{
	int len;
	char s[];
	s = *s;
	len = strlen(s);
	return len;
}
