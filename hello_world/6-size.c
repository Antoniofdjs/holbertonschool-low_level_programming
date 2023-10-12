#include <stdio.h>
/**
 * main - entry point
 *
 * Return: devolver el 0
 *
 */
int main(void)
{
	char char_size;
	int int_size;
	float float_size;
	long long int loloint_size;
	long int loint_size;

	printf("Size of char: %zu byte(s)\n", sizeof(char_size));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int_size));
	printf("Size of a long int: %zu byte(s)\n", sizeof(loint_size));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(loloint_size));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float_size));
	return (0);
}
