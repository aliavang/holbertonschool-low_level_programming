#include "holberton.h"
/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: String consisting of 0 and 1 to be converted
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int end;

	if (b == NULL)
	{
		return (0);
	}
	end = 0;
	while (b[end] != '\0')
	{
		end++;
	}
	end--;
	pow = 1;
	sum = 0;
	while (end >= 0)
	{
		if (b[end] == '0')
		{
			sum += 0;
		}
		else if (b[end] == '1')
		{
			sum += pow;
		}
		else
		{
			return (0);
		}
		pow *= 2;
		end--;
	}
	return (sum);
}
