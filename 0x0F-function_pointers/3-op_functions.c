#include "3-calc.h"
/**
 * op_add - Add a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Result of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Find remainder of a mod by b
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of a mod by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
