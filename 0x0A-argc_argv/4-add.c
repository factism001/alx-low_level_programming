#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - program to add positive numbers
  * @argc: number of command line arguments
  * @argv: array that contains the arguments passed in the program
  * Return: 0 - sucess
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[] == '\0')
			{
				printf("0\n");
			}
			else if (!isdigit(argv[i])
					printf("Error\n");
					return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
