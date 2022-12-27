#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - program to add positive numbers
  * @argc: number of command line arguments
  * @argv: array that contains the arguments passed in the program
  * Return: 0 - Success
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		p = argv[i];
		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
	}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
