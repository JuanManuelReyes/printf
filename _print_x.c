#include "main.h"

/**
 *_print_x - Function that prints a number in Lower Case Hexa.
 *@x: Number that will be printed in Hexa.
 *Return: Char quantity.
 **/
int _print_x(va_list x)
{
	return (_print_hexa(va_arg(x, unsigned int), 0));
}