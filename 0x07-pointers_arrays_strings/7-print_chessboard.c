#include "main.h"
/**
  * print_chessboard - a function that prints the chessboard
 7 * @a: the array of character to use in printing
  * Return: No return
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}
