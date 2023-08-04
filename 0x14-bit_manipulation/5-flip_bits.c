#include "main.h"

/**
  * flip_bits - gets the number of bits to flip to get a num from anothe num
  * @n: given number
  * @m: number to be converted to from n
  *
  * Return: number of bits to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n ^= m;
	while (n)
	{
		count++;
		n &= (n - 1); /*unset & clear LSB */
	}
	return (count);
}
