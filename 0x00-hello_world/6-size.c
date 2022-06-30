#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
        char charType;
        int intType;
        long int longIntType;
        long long int longLongType;
        float floatType;
	printf("Size of a char: %1d byte(s)\n", sizeof(charType));
	printf("Size of an int: %id byte(s)\n", sizeof(intType));
	printf("Size of a long int: %id byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %id byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %id byte(s)\n", sizeof(floatType));
	return (0);
}
