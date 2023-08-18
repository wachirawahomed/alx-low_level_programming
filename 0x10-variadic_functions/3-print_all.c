#include "variadic_functions.h"

/**
 * print_chr - prints characters
 * @list: argument to be printed.
 */
void print_chr(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_int - prints integer
 * @list: argument to be printed.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_flt - prints floats
 * @list: argument to be printed.
 */
void print_flt(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_str - prints string
 * @list: argument to be printed.
 */
void print_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all -  prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *separator = "";
	va_list list;

	any_t data[] = {
		{'c', print_chr},
		{'i', print_int},
		{'f', print_flt},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (data[i].ltr != '\0')
		{
			if (data[i].ltr == format[j])
			{
				printf("%s", separator);
				data[i].func(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
