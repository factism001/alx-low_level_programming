include "main.h"
/**
  * print_line - draws a straight line on terminal
  * @n: number of times to draw line
  */
void print_line(int n)
{
	int i;

	for (line = 0; line <= n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
