#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_diagsums -  prints the sum of the two diagonals of a
*square matrix of integers
*@a: matrix of integers
*@size: size of the matrix
*Return: (sum1, sum2)
*/
void print_diagsums(int *a, int size)
{
	int index;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
