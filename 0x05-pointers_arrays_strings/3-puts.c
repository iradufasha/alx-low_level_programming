
/**
 * putchar - inteshamutwe
 * Description: go
 * @char: go
 * Return: 0
 **/

int _putchar(char);

/**
 * _puts -like
 * Description: go
 * @str: simple
 * Return: 0
 **/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
