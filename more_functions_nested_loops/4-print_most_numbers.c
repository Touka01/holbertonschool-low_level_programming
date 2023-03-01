#include "main.h"

/**
* print_most_numbers - do not print 2 4
*
* Return: value of print most numbers
*/
void print_most_numbers(void)
{
	int a = 0;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
