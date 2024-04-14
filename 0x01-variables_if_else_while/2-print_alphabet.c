#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program uses the function putchar()
 * to print the alphabet in lowercase
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
