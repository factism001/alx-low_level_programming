#include <stdio.h>
/**
  * main - entry point
  * description: prints all lowercase alphabets except q and e
 *Return: always 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
