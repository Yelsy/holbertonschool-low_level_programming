#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * atoi is a function that converts a string into an int
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
