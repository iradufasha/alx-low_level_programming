#include "main.h"

/**
 * _strcpy - cpy string pointed by src
 * @dest: destination
 * @src: source
 * Return: answer
 **/

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = +(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}

