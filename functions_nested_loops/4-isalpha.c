#include "main.h"

/**
 * _isalpha - checks for alphabet char
 * @c: character
 * Return: 1 if lower or uppercase, 0 if not alphabet char
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
<<<<<<< HEAD
}
=======
}
>>>>>>> b455b7e88c658081449c406635f01eece9e795db
