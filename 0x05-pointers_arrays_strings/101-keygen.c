#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

#define PASSWORD_LENGTH 10

const char valid_chars[] = "!#$%()*+,-./:=@[]^_{}";

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	password[i] = valid_chars[rand() % strlen(valid_chars)];
	password[PASSWORD_LENGTH] = '\0';

	printf("Random password: %s\n", password);

	return (0);
}
