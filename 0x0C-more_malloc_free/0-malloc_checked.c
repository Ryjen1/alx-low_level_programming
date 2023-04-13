#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of byte
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *prt;

	prt = malloc(b);
	if (prt == NULL)
		exit(98);
	return (prt);
}
