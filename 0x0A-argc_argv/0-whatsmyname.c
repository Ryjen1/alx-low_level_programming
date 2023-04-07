#include <stdio.h>
/**
  * main - Print the name of the executable file
  * @argc: argument to count
  * @argv: argument to print string
  * Return: 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
