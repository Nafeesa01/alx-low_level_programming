#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: first param
 * @src: second param
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{

int i;
int j;

i = 0;
j = 0;

while (*(dest + i))
	i++;

while ((*(dest + i) = *(src + j)))
{

	i++;
	j++;

}
return (dest);
}
