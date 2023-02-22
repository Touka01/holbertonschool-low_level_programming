#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	putchar(lowercase);
	putchar(uppercase);
	putchar('\n');
	return (0);
}
