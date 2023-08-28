#include "main.h"
#include <stdio.h>

/**
*print_buffer - print the content of size bytes of the buffer *b
*The output should print 10 bytes per line
*Each line starts with the position of the first byte of the line
*in hexadecimal (8 chars), starting with 0
*Each line shows the hexadecimal content (2 chars) of the buffer,
*2 bytes at a time, separated by a space
*Each line shows the content of the buffer. If the byte is a
*printable character, print the letter,
*if not, print .
*@b: buffer
*@size: size
*Return: void
*/
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - : 10;
		printf("%08x:", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%2x", (b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
