#include <stdio.h>
/**
* main - prints the size of various types
*
* Return: always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %dbyte(s)\n", sizeof(char));
	printf("Size of a int: %dbyte(s)\n", sizeof(int));
	printf("Size of a long int: %dbyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %dbyte(s)\n", sizeof(long long int));
	printf("Size of a float: %dbyte(s)\n", sizeof(float));
	return (0);
}
