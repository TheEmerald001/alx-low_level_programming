#include "stdio.h"
/**
 * main - prints the number of arguments passed to it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
