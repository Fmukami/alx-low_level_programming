#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
		printf("%s\n", argv[s]);
	return (0);
}
