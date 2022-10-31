#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @n: number of memory area in byte pointed to by 's'
  * @s: memory area
  * @b: constant byte to fill with
  * Return: pointer to memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
