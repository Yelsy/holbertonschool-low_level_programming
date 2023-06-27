#include "main.h"

/**
 * _strlen_recursion - Entry Point
 *@s: input
 *Return: value of the lenght
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	count = _strlen_recursion(s) + 1;
	return (count);
}
