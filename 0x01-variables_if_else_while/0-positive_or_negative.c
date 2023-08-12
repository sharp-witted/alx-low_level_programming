#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
*main - assign random numbers and classify positive or negative
*
*return Always(0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX/2;
if (n>0)
	printf("%d is positive\n",n);
else if (n == 0)
	printf("%d is zero\n",n);
else
	printf("%d is negative\n",n);
Return:(0);
}
