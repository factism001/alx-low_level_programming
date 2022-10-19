#include "main.h"
/**
  * print_alphabet_x10 - It prints alphabets in lowercases 10 time
  */
void print_alphabet_x10(void)
{
	int count;
	int letter;

	while (count = 0; count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
	_putchar('\n');
}
