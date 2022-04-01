#include "stdio.h"
/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
