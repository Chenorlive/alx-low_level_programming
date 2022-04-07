#include <stdio.h>

/** main func */

int main(void)
{
	int intT;
	char charT;
	long int longT;
	long long int longg;
	float floatT;


	printf("Size of a char: %zu byte(s)\n", sizeof(charT));
	printf("Size of an int: %zu byte(s)\n", sizeof(intT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longg));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatT));

	return (0);
}
