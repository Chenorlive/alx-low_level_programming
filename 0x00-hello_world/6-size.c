#include <stdio.h>

/** main func */

int main(void)
{
	int intT;
	char charT;
	long int longT;
	long long int longg;
	float floatT;


	printf("Size of char: %zu byte(s)\n", sizeof(charT));
	printf("Size of int: %zu byte(s)\n", sizeof(intT));
	printf("Size of long int: %zu byte(s)\n", sizeof(longT));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longg));
	printf("Size of float: %zu byte(s)", sizeof(floatT));

	return (0);
}
