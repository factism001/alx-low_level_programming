include "main.h"
/**
  * print_line - draws a straight line on terminal
  * @n: number of times to draw line
  */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n > 0)
			_putchar(95);
	}
	else
		_putchar('\n');
}
