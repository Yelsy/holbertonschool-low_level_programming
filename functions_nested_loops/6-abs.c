#include "main.h"
/**
 * _abs - prints the abs value of integer
 *@n: the int to check
 * Return: the abs value 
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return n;
}
