#include "main.h"

/**
 * do_sqrt_recursion - needs extra parameter r to work
 * @n: number
 * @r: iterator
 *
 * Return: the natural root of n or -1 if not found
 */
int do_sqrt_recursion(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (do_sqrt_recursion(n, r + 1));
}

/**
 * _sqrt_recursion - sqrt that use recursion
 * @n: parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
