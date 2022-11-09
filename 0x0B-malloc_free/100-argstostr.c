#include "main.h"
#include <stdlib.h>
/**
  * argstostr - a function that concatenate the arguments of a program
  * @ac: string count
  * @av: the character string
  * Return: pointer to new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, total;
	char *str, *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; total = 0; i < ac; i++)
	{
		if (str == NULL)
			return (NULL);
		str = malloc(total * sizeof(str) + 1);
	}
	total++;

	new_string = str;

	for (j = 0; j != '\0'; j++)
		av[i][j] = *str;
	return (new_string);
}
