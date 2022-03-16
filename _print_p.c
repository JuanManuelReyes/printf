#include "main.h"

/**
 *_print_p - prints mem address
 *@p: list
 *Return: Char quantity.
 **/
int _print_p(va_list p)
{
	unsigned long i = va_arg(p, unsigned long);
	int count = 0;

	if (i == 0)
	{
		return (_printf("(null)"));
	}

	count += _putchar('0');
	count += _putchar('x');
	count += _print_hexa_aux(i);
	return (count);
}

