#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Program prints the sizes of different data types'
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);

}
