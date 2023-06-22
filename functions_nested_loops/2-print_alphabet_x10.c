#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
