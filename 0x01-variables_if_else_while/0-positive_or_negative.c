#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 *
 * main - Entry point
 *
 * 
 *
 * Description: 'positive checker'
 *
 * 
 *
 * Return: Always 0 (Success)

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
		break;
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
