#include "variadic_functions.h"

/**
 * print_strings - prints a strings.
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
		i++;
	}
	va_end(list);
	printf("\n");
}
