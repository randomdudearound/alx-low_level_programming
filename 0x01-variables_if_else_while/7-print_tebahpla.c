#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program uses the function putchar()
 * to print the alphabet in lowercase in reverse
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
