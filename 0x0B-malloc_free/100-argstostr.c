#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argc
 * @av: the arguments to be concatenated.
 * Return: pointer to the array
 */
char *argstostr(int ac, char **av)
{
	char *s; 
	int i, j;
	int n = 0;
	int z = 0;

	if (ac == 0 || av == NULL) 
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}
	n++;

	s = malloc(n * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[z++] = av[i][j];
		}
		s[z++] = '\n';
	}
	s[z] = '\0';

	return (s);
}
