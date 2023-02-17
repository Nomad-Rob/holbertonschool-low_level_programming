#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
* main - prints out the arguements themselves
* @argc: counts the number of arguments
* @argv: array of strings
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
