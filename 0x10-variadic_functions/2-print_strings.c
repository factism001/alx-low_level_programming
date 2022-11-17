#include "variadic_functions.h"

/**
  * print_strings - prints string using variadic
  * @separator: the character to seperate string
  * @n: the number of string to pass
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (seperator && i < n - 1)
			printf("%s", separator)
	}

	printf("\n");
	va_end(ap);
}
