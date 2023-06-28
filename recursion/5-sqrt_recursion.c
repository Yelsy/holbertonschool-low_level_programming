#include "main.h"

/**
 * check_sqrt - checks for the square root of y
 *@x: input
 *@y: number to find sqrt
 *Return: -1 or sqrt of c
 */
int check_sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	return (check_sqrt(x + 1, y));

}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input
 *
 *Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_sqrt(1, n));
}

