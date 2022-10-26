#include <stdio.h>



/**
* _putchar - simple function to print divisible in a string
* @c: argument1
* Description: holberton printer
* Return: 0
**/



int _putchar(char c);



/**
* puts2 - simple function to print divisible in a string
* @str: argument1
* Description: go
* Return: 0
**/



void puts2(char *str) /* also same as void puts2(char str[]) */

{

	int i = 0;



	while (*(str + i) != '\0')

	{

		if (*(str + i) % 2 == 0)

		{

			_putchar(*(str + i));

		}


		else
		{
			continue;
		}

		i++;

	}

}
