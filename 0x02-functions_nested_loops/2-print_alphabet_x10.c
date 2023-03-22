#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet times 10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
