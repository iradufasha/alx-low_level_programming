#include "main.h"

/**
 * main - Entry point
 * Description: bikri
 * Return: Always 0 (Success)
 */

int main(void)

{

	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		*sh++;
	}
	
	_putchar('\n');
	return (0);
}
