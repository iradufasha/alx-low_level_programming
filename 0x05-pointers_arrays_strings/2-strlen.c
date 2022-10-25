/**
 * _strlen - callculates the total length of a string
 * description:  i'm going for ward
 * @str: pases the string
 *Return: always return 0
 **/

int _strlen(char *str)

{

	int sum = 0, i = 0;

	while (str[i] != '\0')

	{

		sum = sum + 1;

		i++;

	}

	return (sum);

}
