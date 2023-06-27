#include "main.h"

/**
 * factorial - Entry Point
 *@n: input
 *Return: the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
