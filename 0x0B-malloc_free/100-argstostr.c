#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: pointer to concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, n, total_length = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			total_length++;
		total_length++;
	}
	total_length++;

	str = malloc(sizeof(char) * total_length);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[index++] = av[i][n];
		}
		str[index++] = '\n';
	}
	str[index] = '\0';

	return (str);
}
