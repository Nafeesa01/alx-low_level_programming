#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * followed by a new line (\n)
 *
 **/




void more_numbers(void)
{

int count;
int num;

count = 0;

while (count < 10)
{
num = 0;
while (num < 15)
{
if (num > 9)
_putchar('0' + (num / 10));
_putchar('0' + (num % 10));
num++;
}
_putchar('\n');
count++;
}
}
