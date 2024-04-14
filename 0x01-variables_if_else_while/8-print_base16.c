#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function prints all
 * the numbers of base 16
 * in lower case followed by a new line
 * starting from 0 using putchar()
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (int i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
