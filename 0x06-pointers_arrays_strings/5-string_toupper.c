#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: not sure yet
 */

char *string_toupper(char *a)
{
	int n = 0;

	while (a[n])
	{
		if (a[n] >= 97 && a[n] <= 122)
		{
			a[n] -= 32;
		}
		n++;
	}
	return (a);
}
