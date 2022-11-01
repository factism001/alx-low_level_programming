#include "main.h"
/**
  * _memcpy -  a function that copies from one memory area to another.
  * @dest: destination area to copy 'src' memory to
  * @src: memory area to copy byte value from
  * @n: number of times to fill byte to 'dest' memory
  * Return: pointer to destination byte memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
		*(src + i) = *(dest + i);

	return (dest);
}
