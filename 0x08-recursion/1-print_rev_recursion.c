#include "main.h"
/**
  * _print_rev_recursion - a functiin that prints string in reverse
  * @s: the string to print
  * return: no return
  */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
