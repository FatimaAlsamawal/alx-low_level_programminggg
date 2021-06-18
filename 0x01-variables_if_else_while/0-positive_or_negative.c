#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * Positive or negative
 * Description: tells which number positive, negative or equal to zero
 * Return: return 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n == 0)
	  printf("%d is zero\n",n);
	if(n > 0)
	  printf("%d is positive\n",n);
	if(n < 0)
	  printf("%d is negative\n",n);
	return (0);
}
