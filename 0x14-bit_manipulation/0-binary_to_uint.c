#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 ifthere is one or more chars in the string b that is not 0 or 1,
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[p] - '0');
	}

	return (dec_val);
}