#include <stdio.h>
/**
  * main - a program that prints all arguments it receives.
  * @argc: the number of arguement received by program
  * @argv: the array of arguement string in program
  * Return: 0 - sucess.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
