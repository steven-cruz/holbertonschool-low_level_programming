#include "holberton.h"

/**
 * _printf - Our own printf function
 * @format: String to print (may include modifiers of format)
 *
 * Return: Number of characters printed, or -1 if fail
 */
int _printf(const char *format, ...)
{
	int pos = 0, printed = 0;
	buf *toPrint = createBuf();
	va_list list, aux;

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (0);

	va_start(list, format);
	while (format[pos] != '\0')
	{
		if (format[i] == '%')
		{
			va_copy(aux, list);
			printed += conv(format + i, aux);
			va_end(aux);
			i += 2;
			/*
			 * TODO: Pending modification when adding other specifiers.
			 */
			continue;
		}
		printed += printChar(toPrint, format[i]);
	}

	va_end(list);
	freeBuf(toPrint);

	return (printed);
}
