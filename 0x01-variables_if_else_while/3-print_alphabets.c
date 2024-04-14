#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function prints the alphabet
 * in lower then upper case
 * using purchar()
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
	putchar(CH);
	}
	putchar('$\n');

	return (0);
}
