#include "main.h"

/**
 * _strlen - string length
 * @s: string
 *
 * Return: length of integer
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * do_is_palindrome - palindrome check recursively
 * @s: string
 * @l: the string length
 * @i: an iterator
 *
 * Return: number
 */
int do_is_palindrome(char *s, int l, int i)
{
	if (i >= l / 2)
		return (1);
	if (*(s + i) == *(s + l - i - 1))
		return (do_is_palindrome(s, l, i + 1));
	return (0);
}

/**
 * is_palindrome - tells if string is palindrome
 * @s: string
 *
 * Return: number
 */
int is_palindrome(char *s)
{
	int l = _strlen(s);

	return (do_is_palindrome(s, l, 0));
}
