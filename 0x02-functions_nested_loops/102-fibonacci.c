#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int countto = 50;
	long int a = 0;
	long int b = 1;
	long int c = 1;

	for (i = 1; i <= countto; counter++)
	{
		printf("%li", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
