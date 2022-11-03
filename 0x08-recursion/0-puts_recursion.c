#include "main.h"
/**
  * _puts_recursion - a function that prints a string with new line
  * @s: string to print
  * Return: no return
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
		_putchar('\n');
}
