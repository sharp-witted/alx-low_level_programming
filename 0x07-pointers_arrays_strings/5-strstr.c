#include "main.h"
#include <stdio.h>

/**
*_strstr -  locates a substring
*@haystack: string within which to search
*@needle: substring to locate
*Return: (needle, else, NULL)
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

if (needle == 0)
return (haystack);
while (*haystack)
{
	index = 0;
}
if (haystack[index] == needle[index])
	{
do {
if (needle[index + 1] == '\0')
return (haystack);
	index++;
	} while (haystack[index] == needle[index]);
	}
	haystack++;
return ('\0');
}
