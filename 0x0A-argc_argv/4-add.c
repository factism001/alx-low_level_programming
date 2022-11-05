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
	int sum, nondigit = 0;

	for (i = 0; i < argc; i++)
	{
		for (nondigit = 0; argv[i][nondigit] != '\0'; digit++)
		{
			if (!isdigit(argv[i][nondigit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
