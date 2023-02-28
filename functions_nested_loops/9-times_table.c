#include "main.h"

/**
* times_table - Entry point
*
* Return: output value
*/

void times_table(void)
{
	int a, b, resu;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			resu = (a * b);
			if (resu > 9)
				_putchar((resu / 10) + '0'), _putchar((resu % 10) + '0');
			else
				(b == 0) ? 'i' : _putchar(' '), _putchar(resu + '0');
			(b < 9) ? (_putchar(','), _putchar(' ')) : _putchar('\n');
		}
	}
}
