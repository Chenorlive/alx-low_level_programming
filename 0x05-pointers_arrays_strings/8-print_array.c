#include "main.h"
#include <stdio.h>

/**
 * print_array - a func to print the value of array
 * @a: input of int
 * @n: input of int
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
