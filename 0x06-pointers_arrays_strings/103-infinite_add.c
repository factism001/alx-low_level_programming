#include <string.h>
#include <stdio.h>

/**
 * infinite_add - Adds two numbers represented as strings
 * and stores the result in a buffer.
 * @n1: String representing the first number.
 * @n2: String representing the second number.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 * Return: Pointer to the result string if the result fits in the buffer,
 * otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	int max_len = (len1 > len2) ? len1 : len2;

	int carry = 0;

	int i;

	if (size_r < max_len + 1)
	{
		return (0);
	}

	memset(r, '0', size_r);
	r[size_r - 1] = '\0';

	for (i = 0; i < max_len; i++)
	{
		int d1 = (i < len1) ? n1[len1 - i - 1] - '0' : 0;
		int d2 = (i < len2) ? n2[len2 - i - 1] - '0' : 0;
		int sum = d1 + d2 + carry;

		carry = sum / 10;

		r[size_r - i - 2] = (sum % 10) + '0';
	}

	if (carry)
	{
		r[size_r - max_len - 1] = carry + '0';
	}
	else
	{
		while (*r == '0' && *(r + 1) != '\0')
		{
			r++;
		}
	}
	return (r);
}
