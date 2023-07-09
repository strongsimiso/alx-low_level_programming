#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: destination string
  * @src: Source string to be added
  *
  * Return: Pointer to dest string after concat
  */

char *_strcat(char *dest, char *src)
{
	int i = 0, lendest = 0;

	while (*(dest + lendest) != '\0')
	{
		lendest++;
	}

	while (i >= 0)
	{
		*(dest + lendest) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
		lendest++;
	}
	return (dest);
}
