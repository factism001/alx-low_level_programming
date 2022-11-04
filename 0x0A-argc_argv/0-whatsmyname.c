#include <stdio.h>
/**
  * main - Prints program name
  * @argc: the number of command line arguments
  * @argv: array that contains the command line arguement strings
  * Return: 0 - Success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
