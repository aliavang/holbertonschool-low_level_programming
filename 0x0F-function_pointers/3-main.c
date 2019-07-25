#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = *argv[2];
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
