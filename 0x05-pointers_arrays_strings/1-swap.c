#include "main.h"

/**
 * swap_int - fun to change value
 * @a: an input of int
 * @b: an input of int
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
