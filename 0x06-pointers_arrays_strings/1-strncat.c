#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates two strings
*it will use at most n bytes from src; and
*src does not need to be null-terminated if it contains n or
*more bytes
*@dest:input string
*@src: input string
*@n: input value
*Return: (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
