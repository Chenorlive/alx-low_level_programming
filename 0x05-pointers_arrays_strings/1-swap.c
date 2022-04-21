#include "main.h"

/**
 * swap_int - fun to change value
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}
