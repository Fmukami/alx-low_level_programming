#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, l, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
		{
			str[k] = av[i][l];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
