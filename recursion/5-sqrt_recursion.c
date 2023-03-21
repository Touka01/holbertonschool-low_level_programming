#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	return (find(0, n));
}

/**
* find - finds sqrt of a number
* @i: int to check with
* @n: number
* Return: int
*/

int find(int i, int n)
{
	if (n > 0)
	{
		n -= (1 + 2 * i);
		return (find(i + 1, n));
	}
	else if (n == 0)
		return (i);
	else
		return (-1);
}
