#include "main.h"


/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
int b = 0;

while (b < 10)
{

	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
_putchar('\n');
b++;
}
return;
}
