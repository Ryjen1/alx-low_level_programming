#include <stdio.h>

/**
 * main - a program that print all arguments it received
 * @argc: Number of arguments
 * @argv: Arguments received
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
