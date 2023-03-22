#include "main.h"

int print_last_digit(int ernest)
{
	int eks;

	eks = (ernest % 10);

	if (eks < 0)
	{
		eks = (-1 * eks);
	}

	_putchar (eks + '0');
	return (eks);
}
