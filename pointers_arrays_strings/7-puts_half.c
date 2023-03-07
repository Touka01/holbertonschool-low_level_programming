#include "main.h"
#include <string.h>
/**
* puts_half - print half
* @str: string
* Return: second half
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
