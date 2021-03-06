#include "main.h"

/**
 * times_table - displays a time table
 * input character
 *
 * Return: smthn
 */
void times_table(void)
{
	int line = 0;
	int row = 0;
	int res = 0;

	for (row = 0 ; row <= 9 ; row++)
		for (line = 0 ; line <= 9 ; line++)
		{
			res = (row * line);
			if (line != 0)
			{
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (line == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
}
