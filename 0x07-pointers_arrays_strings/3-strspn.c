#include "main.h"
#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: string to search
 *@accept: prefix to measure
 *Return: ()
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
		}
		if (accept[index] == '\0')
return (bytes);
	}
	s++;
return (bytes);
}
