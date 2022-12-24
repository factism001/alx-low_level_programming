#include <stdio.h>

/**
 * print_buffer - Prints the contents of a buffer in hexadecimal and ASCII.
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
		{
			printf("%08x  ", i);
		}

		printf("%02x ", b[i] & 0xff);

		if (i % 2 == 1)
		{
			putchar(' ');
		}

		if (i % 10 == 9)
		{
			putchar(' ');
		}
		putchar(isprint(b[i]) ? b[i] : '.');

		if (i % 10 == 9)
		{
			putchar('\n');
		}
	}

	if (i % 10 != 0)
	{
		putchar('\n');
	}
}
