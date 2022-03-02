#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars, and
 *           initializes it with a specific char
 * @size: size of array
 * @c: char to initialize
 *
 * Return: NULL or str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n = 0;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	for (n = 0; n < size; n++)
	{
		str[n] = c;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	free(str);
	return (str);
}
