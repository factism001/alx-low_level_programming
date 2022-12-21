#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix.
  * @a: the arraybto be checked
  * @size: size of the array to be checked
  * Return: no return
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("Sum of diagonal 1: %d\n", sum1);
	printf("Sum of diagonal 2: %d\n", sum2);
}
