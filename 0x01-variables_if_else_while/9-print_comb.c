#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program prints all possible
 * combinations of single digit numbers
 * seperated by a comma using putchar only
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
