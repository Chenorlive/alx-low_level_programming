#include <stdio.h>

int main(void)
{
	int intT;
	char charT
	long int longT;
	long long int longg; 
	float floatT;

	
	printf("Size of char: %zu byte(s)", sizeof(charT));
	printf("Size of int: %zu byte(s)", sizeof(intT));
	printf("Size of long int: %zu byte(s)", sizeof(longT));
	printf("Size of long long int: %zu byte(s)", sizeof(longg));
	printf("Size of float: %zu byte(s)", sizeof(floatT));
	
	return (0);
}
