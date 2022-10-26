#include "main.h"
#include <stdio.h>

/**
 * print_array - go
 * @a: array
 * @n: numbre
 * Return: 0
 **/

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		print("%d", a[t]);
		if (t != n-1)
			printf(", ");
	}
	printf("\n");
}

