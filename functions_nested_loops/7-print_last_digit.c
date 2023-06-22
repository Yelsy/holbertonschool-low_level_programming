#include "main.h"
/**
 * print_last_digit - prints last digit of a digit
 *@n: the int to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (n < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
