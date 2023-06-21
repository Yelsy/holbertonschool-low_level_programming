#include <stdio.h>
/**
 * main - Entry point
 * Description: "this file will print
 * words in reverse"
 *  Return: Always 0 success
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);

	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
