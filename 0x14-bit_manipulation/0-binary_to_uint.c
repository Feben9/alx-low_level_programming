#include "main.h"
/**
 * binary_to_uint - a function that converts
 * binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i, slen, weight = 1;

	slen = strlen(b);

	if (!b)
		return (0);
	
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == 1)
			total += weight;
		weight *= 2;
	}
	return (total);
}
