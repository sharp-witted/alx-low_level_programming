#include "main.h"
#include <stdio.h>

/**
*_memcpy- copies memory area *src to *dest
*@dest: destination memory address
*@src: source memory address
*@n: number of copies
*Return: (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
