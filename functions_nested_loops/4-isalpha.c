#include "main.h"
/**
 * _isalpha - checks alphabetic character
 *@c: the character will be checked
 * Return: 1 forcharacter, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
