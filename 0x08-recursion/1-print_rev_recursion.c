#include "main.h"
/**
  * _print_rev_recursion - a functiin that prints string in reverse
  * @s: the string to print
  * return: no return
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	_putchar('\n');
}
