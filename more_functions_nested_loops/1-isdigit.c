#include "main.h"

/**
 *_isdigit - function that checks 0 through 9
 *@c: char to check
 *
 *Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
