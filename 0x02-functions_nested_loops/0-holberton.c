#include "holberton.h"

/**
* main - entry point
* Description - A program that prints Holberton
*
* Return: 0 on success
*/

int main(void)
{
	char str[] = "Holberton";
	int count, size;

	size = sizeof(str);

	for (count = 0; count <= size; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');

	return (0);
}

