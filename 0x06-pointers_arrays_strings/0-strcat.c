#include "main.h"
/**
  * _strcat -  this function appends one string to another string
  * @dest: the destination string
  * @src: the source string
  * Return: a pointer  to the resulting string
  */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest(i) != '\0'; i++)
		destlen++;
	for (i = 0 ; src(0) != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest(destlen + 1) = src(i);
	return (dest);

}
