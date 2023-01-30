#include "main.h"
/**
* _islower - checks to see if input char is lowercase
*
* Return: 1 if lowercase and 0 otherwise
*
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
