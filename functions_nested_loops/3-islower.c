#include "main.h"
/**
 * _islower - checks if char is lowercase
 *@c: the character will be checked
 * Return: 1 for lowercase character, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
