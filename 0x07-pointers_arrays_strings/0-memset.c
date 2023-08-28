#include "main.h"
#include <stdio.h>

/**
*char *_memset - fills memory with a constant byte
*@s: memory area to fill
*@b: character to copy
*@n: number of times to copy @b
*Return: (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
