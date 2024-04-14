#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function prints all
 * single digit numbers of base 10
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
	putchar('\n');

	return (0);
}
