#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - sqrt that use recursion
 * @n: parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
        return (_sqrt(n, 1));
}
/**
 * _sqrt- needs extra parameter r to work
 * @n: a number
 * @r: an iterator
 *
 * Return: number
 */
int _sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (do_sqrt_recursion(n, r + 1));
}
