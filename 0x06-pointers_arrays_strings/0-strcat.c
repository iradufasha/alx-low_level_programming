#include "main.h"



/**
* _strcat - my strcat
* @dest: destination
* @src: source
* Description: conctinates dest and src
* Return: 0
**/



char *_strcat(char *dest, char *src)

{

	int i = 0;

	int j = 0;



	while (*(dest + i) != '\0')

	{

		i++;

	}

	while (*(src + j) != '\0')

	{

		*(dest + i) = *(src + j);

		i++;

		j++;

	}

	return (dest);

}
