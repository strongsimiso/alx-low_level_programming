#include "main.h"

/**
  * _memset - Fills the first n bytes of memory area pointed to by s
  * with the constant byte 'b'
  * @s: Pointer to an array of addresses
  * @b: Constant value to fill s with
  * @n: Memory area
  *
  * Return: Pointer to array filled array memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
