#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - no thing else
 * Description: 'positive checker'
 * Return: Always zero (Success)
*/

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("%d", n);
	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		printf(" is negative\n");
	}

	return (0);

}
