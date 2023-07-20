#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98, 99 or 100 on failure
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = get_op_func(argv[2]);

if (!op)
{
printf("Error\n");
exit(99);
}

result = op(num1, num2);

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", result);
return (0);
}
