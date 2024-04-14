#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program outputs a random number to the screen and
 * tells the user what the last digit of the random number is
 * and whether the digit is greater than 5, less than 6 but not 0,
 * or whether the digit is 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	if (last_num > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	else if (last_num == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_num);
	else if (last_num < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);

return (0);
}
