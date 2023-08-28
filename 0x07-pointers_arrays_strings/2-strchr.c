#include "main.h"
#include <stdio.h>

/**
*_strchr - locates a character in a string
*@s: string to search through
*@c: character to locate
*Return: (*1st occurance of c, else, NULL)
*/

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
