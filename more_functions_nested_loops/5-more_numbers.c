#include "main.h"

/**
* _putchar - print 0 & 14
*
* Return: 10 times the numbers 0 to 14
*/

void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
