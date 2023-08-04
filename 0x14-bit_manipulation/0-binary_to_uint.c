#include "main.h"

/**
  * binary_to_uint - converts a binary to unsigned int
  * @b: input binary string
  *
  * Return: number in base 10
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow;
	int j, i = 0;

	if (!b)
		return (num);
	while (*(b + i))
	{
		if (*(b + i) == '1' || *(b + i) == '0')
			i++;
		else
		return (num);
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (j == i - 1)
			pow = 1;
		else
			pow <<= 1;
		if (*(b + j) == '1')
			num += pow;
	}
	return (num);
}
