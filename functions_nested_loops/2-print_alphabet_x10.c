#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - Entry point
*
* Return: Defaut value
*/


void print_alphabet_x10(void)
{
	char alphabet;
	int ten;

	for (ten = 1; ten <= 10; ten++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
