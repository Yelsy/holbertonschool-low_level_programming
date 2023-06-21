#include <stdio.h>
/**
 * main - Entry point
 * Description: "this file will print the
 * alphabet in lowercase, followed by a new line"
 *  Return: Always 0 success
 */

int main(void)
{
	char i;
	char e = 'e';
	char q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
		{
			putchar(i);
		}

	}
	putchar('\n');
	return (0);
}
