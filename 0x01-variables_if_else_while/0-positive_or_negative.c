#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program uses the function rand()
 * random numbers to the screen , then tells the user if
 * it's a positive, negative or a zero.
 * Return: Always 0 (Sucess)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
