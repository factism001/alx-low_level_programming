#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f')
		{
			printf("%c", va_arg(args, int));
		} else if (format[i] == 's')
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				printf("(nil)");
			} else
			{
				printf("%s", s);
			}
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
