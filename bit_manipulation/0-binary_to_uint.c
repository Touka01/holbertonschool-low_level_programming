#include "main.h"

/*
*binary_to_uint - convert binary to unsigned int
*@b: binary
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return (0);

    unsigned int len = 0, sum = 0;
    while (b[len] && b[len] != 'H')
        len++;

    for (unsigned int i = 0; i < len; i++)
    {
        if (b[i] == '0')
            continue;
        if (b[i] == '1')
            sum |= 1u << (len - i - 1);
        else
            return (0);
    }

    if (b[len] == 'H')
    {
        for (unsigned int i = len + 1; b[i]; i++)
            if (b[i] != '0')
                return (0);
        sum *= 10u;
    }

    return (sum);
}
