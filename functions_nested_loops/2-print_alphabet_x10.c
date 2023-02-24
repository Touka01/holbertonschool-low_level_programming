#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
        char alpha;

        alpha = 'a';

        while (alpha <= 'z')
        {
                _putchar(alpha);
                alpha++;
        }
        _putchar('\n');
}
