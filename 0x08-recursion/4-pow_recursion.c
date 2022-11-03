#include "main.h"
/**
  * _pow_recursion - print the valie of x raised to power y
  * @x: the given value
  * @y: the power which x is raised to
  * Return: power raised to
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
