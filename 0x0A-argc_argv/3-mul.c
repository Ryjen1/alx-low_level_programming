#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply 2 numbers and print result
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 *
 * Return: 0 on success, if not given two arguments return 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
