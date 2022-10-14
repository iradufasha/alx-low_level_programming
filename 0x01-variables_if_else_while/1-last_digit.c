#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - just friday
 * Description: 'this main is on roll'
 * Return: Always Zero (Success)
*/

int main(void)

{

	int n, mod;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	printf("Last digit of %d", n);
	mod = n % 10;
	printf(" is %d", mod);
	if (mod > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (mod == 0)
	{
		printf(" and is 0\n");
	}
	else if (mod < 6 && mod != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf("sory unknown command\n");
	}
	return (0);

}
