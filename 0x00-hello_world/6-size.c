#include <stdio.h>

int main(){
	char character;
	int integer;
	long longint;
	long long doublelong;
	float floatpoint;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(doublelong));
	printf("Size of a float: %d byte(s)\n", sizeof(floatpoint));
	return 0;
}
