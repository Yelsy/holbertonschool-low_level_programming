#include <stdio.h>
/**
 * main - Entry point
 * Description: "this file will print the
 *  alphabetic in lowercase"
 *  Return: Always 0 success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
