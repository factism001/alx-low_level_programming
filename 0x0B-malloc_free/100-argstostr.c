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
	char *str;
	int total_length, offset, length;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		length = 0;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		total_length += lenght + 1;
	}
	str = malloc(total_length + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	offset = 0;
	for (i = 0; i < ac; i++)
	{
		length = 0;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[offset++] = av[i][j];
			length++;
		}
		str[offset++] = '\n';
	}
	str[offset] = '\0';

	return (str);
}
