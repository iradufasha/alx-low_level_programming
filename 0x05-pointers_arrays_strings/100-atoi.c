#include "main.h"

/**
 * _atoi - tough work
 * @s: the string
 * Return: answer
 **/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= +1;
		s++;
	}

	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		num = (nu, * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}

