#include "main.h"
#include <stdio.h>
/**
* print_array - prints number of elements
* @a: array
* @n: int
* Return: number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
