#include "main.h"

/**
* set_string - function that sets the value of a pointer to a char
* @s: cons str
* @to: str to point
* Return: to pointed in s
*/

void set_string(char **s, char *to)
{
	*s = to;
}
