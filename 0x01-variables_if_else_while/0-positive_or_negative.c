#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
		printf("%d is zero", n);
	
	printf("\n");
	return (0);
}
