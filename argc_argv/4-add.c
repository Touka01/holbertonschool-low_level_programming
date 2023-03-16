#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that adds positive numbers
* @argc: The number of command line arguments
* @argv: An array containing the program command line arguments
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j]; j++) {
            if (!isdigit(argv[i][j])) {
                puts("Error");
                return 1;
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return 0;
}
