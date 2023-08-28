#include "main.h"
#include <stdio.h>

/**
*_strpbrk - searches a string for any instance of a set of bytes
*@s: string to search
*@accept: set of bytes to search for
*Return: (s if accept, else, NULL) 
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
return ('\0');
}
