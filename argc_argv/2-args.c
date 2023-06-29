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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
