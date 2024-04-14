#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This function prints the alphabet
 * in lower case except q and e
 * using the function putchar()
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'q' || ch == 'e')
	{
	continue;
	}
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
