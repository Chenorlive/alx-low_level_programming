#include <string.h>

/**
 * _strlen - leng  of string
 * @s: of char
 * Return: int
*/

int _strlen(char *s)
{
	int len = 0;

	while(s[len] != '\0')
		len++;

	return len;
}
