#include<stdio.h>
/*
*main - putchar alphabet in lowercase and uppercase
*
*return Always(0)
*/
int main(void)
{
	int i;
	for(i=0; i<26; i++)
	{
		putchar('a'+i);
	}
	for(i=0; i<26; i++)
	{
		putchar('A'+i);
	}
	putchar('\n');
Return:(0);
}
