
/**
 * _puts - like puts
 * @str: simple parameter
 * Return: 0
 **/
int _putchar(char);

void _puts(char *str)
{
	int i =0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n);
}
