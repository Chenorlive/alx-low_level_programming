
/**
 * swap_int - fun to change value
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int *tmp = *b;
	*b = *a;
	*a = *tmp;
}
