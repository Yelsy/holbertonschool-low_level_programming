#include "main.h"

/**
 *more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *Return void
 */
void more_numbers(void)
{
	int c;
	int j;

	for (c = 0; c < 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar ((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
