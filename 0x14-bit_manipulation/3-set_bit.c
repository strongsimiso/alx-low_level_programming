#include "main.h"

/**
  * set_bit - Sets the bit value at a given index
  * @n: Pointer to the given unsigned long int
  * @index: the given index
  *
  * Return: 1 on success or -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = -1;

	if (n != NULL && index < 64)
	{
		*n |= (1 << index);
		i = 1;
	}
	return (i);
}
