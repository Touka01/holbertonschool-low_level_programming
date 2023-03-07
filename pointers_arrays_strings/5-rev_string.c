#include "main.h"
#include <string.h>
/**
* rev_string - reverses a string
* @s: string
* Returns reversed string
*/

void rev_string(char *s)
{
	char str[10];

	printf("%s\n", s);
	scanf("%s, str);
	int len = strlen(str);
	for(int i =len-1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
