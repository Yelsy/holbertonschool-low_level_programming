#include <stdio.h>
/**
 * main - Entry point
 * Description: "this file will print
 * all possible combinations"
 *  Return: Always 0 success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
