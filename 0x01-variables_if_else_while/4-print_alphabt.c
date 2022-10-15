#include <stdio.h>
/**
  * main - entry point
  * description: prints all lowercase alphabets except q and e
 *Return: always 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z' && !('q' && 'e'))
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
