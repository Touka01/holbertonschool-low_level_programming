#include "main.h"

/*
*binary_to_uint - convert binary to unsigned int
*@b: binary
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	/* Find string length, ignoring any 'H' characters */
	while (b[len] != '\0' && b[len] != 'H')
		len++;

	/* Iterate through string, handling each character */
	i = 0;
	while (i < len)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum += (b[i] - '0') * (1u << (len - i - 1));
		} else
		{
			/* Invalid character */
			return 0;
		}
		i++;
	}

	/* Check if there is an 'H' suffix and handle it if so */
	if (b[len] == 'H')
	{
		/* Check that all remaining characters are '0' */
		i = len + 1;
		while (b[i] != '\0')
		{
			if (b[i] != '0')
			{
				/* Invalid 'H' suffix */
				return (0);
			}
			i++;
		}

		/* Handle the 'H' suffix */
		sum *= 10u;
	}

	return (sum);
}
