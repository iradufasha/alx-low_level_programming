#include <stdio.h>



/**
* rev_string - simple
* @s: argument1
* Descripton: go
* Return: 0
**/



void rev_string(char s[]) /* interpreted as void rev_string(char *s) */

{

	int y, i = 0, j = 0;

	char str[500];

	while (*(s + i) != '\0')

	{

		*(str + i) = *(s + i);

		i++;

	}

	y = i - 1;

	while (y >= 0)

	{

		*(s + y) = *(str + j);

		j++;

		y--;

	}

}
