#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: is an integer
 * @av: is a pointer to a pointer
 * Return: returns NULL or a string array
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length;
	char *concated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}
	concated = malloc((total_length + 1) * sizeof(char));
	if (concated == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concated[k++] = av[i][j];
		}
		concated[k++] = '\n';
	}
	concated[k] = '\0';
	return (concated);
}
