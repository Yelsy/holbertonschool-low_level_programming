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

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);

	}
	putchar('\n');
	return (0);
}
