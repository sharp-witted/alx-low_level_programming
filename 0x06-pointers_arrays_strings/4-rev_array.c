#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverses the content of an array of integers
 *@a: input array
 *@n: number of elements in array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
