#include "main.h"
/**
*print_alphabet - prints alphabet in lowercase 10 times
*
* Return: 0 if succesful
*
*/
int print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
