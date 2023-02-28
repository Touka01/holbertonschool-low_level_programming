#include "main.h"

/**
* _isdigit - check if num=[0-9]
* @c: int
* Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
