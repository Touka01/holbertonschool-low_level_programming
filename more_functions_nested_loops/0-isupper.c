#include "main.h"

/**
* _isupper- checks for uppercase letters
* @c: int
* Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
