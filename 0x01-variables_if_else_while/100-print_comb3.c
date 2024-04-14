#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program prints all possible
 * combinations of two digit numbers
 * seperated by a comma and without
 * repeating same combinations using putchar()only
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');

	return (0);
}
