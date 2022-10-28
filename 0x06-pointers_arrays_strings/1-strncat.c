#include"main.h"



/**
* _strncat - my strncat
* @dest: destination
* @src: source
* @n: number of migrated source members
* Description: conctinates dest and src using n
* Return: 0
**/



char *_strncat(char *dest, char *src, int n)

{

	int i = 0;

	int j;



	while (*(dest + i) != '\0')

	{

		i++;

	}

	j = 0;

	while (j < n && src[j] != '\0')

	{

		*(dest + i) = *(src + j);

		i++;

		j++;

	}

	return (dest);

}
