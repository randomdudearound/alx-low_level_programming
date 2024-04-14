#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program prints all possible
 * combinations of three digit numbers
 * seperated by a comma and without
 * repeating same combinations using putchar()only
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i != j && j !=k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
			
		}

	}
	putchar('\n');

	return (0);
}
