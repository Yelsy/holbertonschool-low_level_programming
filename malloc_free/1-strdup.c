#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string into newly allocated array
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int size = 0;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{
		ptr[size] = str[size];
	}
	return (ptr);
}
