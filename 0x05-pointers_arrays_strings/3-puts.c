#include "main.h"

/**
 * _puts - like puts
 * @str: simple parameter
 * Return: 0
 **/

void _puts(char *str)

{

	int i = 0;



	while (*(str + i))

	{

		_putchar(*(str + i));

		i++;

	}

	_putchar('\n');

}
