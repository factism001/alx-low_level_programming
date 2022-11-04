#include <stdio.h>
/**
  * main - a program that prints the number of
  * arguements passed into it
  * @argc: the number of command line arguement used
  * @argv: the array containig the command line strings
  * Return: 0 - sucess
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
