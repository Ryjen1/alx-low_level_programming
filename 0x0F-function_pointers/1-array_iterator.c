#include "function_pointers.h"

/**
  * array_iterator - ...
  * @array: array
  * @size: size is the size of the array
  * @action: a pointer to the function you need to use
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
