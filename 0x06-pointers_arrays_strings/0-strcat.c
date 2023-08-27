#include "main.h"
/**
*_strcat -  appends the src string to the dest string, overwriting
*the terminating null byte (\0) at the end of dest, and then
* adds a terminating null byte
*@src: input string
*@dest: input string
*Return: (dest)
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
