#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: a string to be counted
 *
 * return: the string length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
