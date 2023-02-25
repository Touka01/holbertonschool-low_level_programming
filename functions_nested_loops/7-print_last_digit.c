#include "main.h"

/**
* print_last_digit - Entry point
* @r: int
* Return: Value of last digit
*/
int print_last_digit(int r)
{
	int LD = r % 10;

	if (LD < 0)
		LD = -LD;
	_putchar('0' + LD);
	return (LD);
}
