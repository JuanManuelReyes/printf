#include "main.h"

/**
 *_print_S - Function that prints a string with non printeable characters.
 *@S: String that will be printed.
 *Return: Char quantity.
 **/
int _print_S(va_list S)
{
	unsigned int i;
	int counter = 0;
	char *string;

	string = va_arg(S, char *);

	if (string == NULL)
		string = "(null)";

	while (string[i] != '\0')
	{
		if (string[i] < 32 || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += _print_hexa_aux(string[i]);
		}
		else
		{
			_putchar(string[i]);
			counter++;
		}

		i++;
	}
	return (counter);
}

