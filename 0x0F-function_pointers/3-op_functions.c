#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of 2 numbers
 * @a: numb1
 * @b: numb2
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * @a: numb1
 * @b: numb2
 * Return: the difference between the 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * @a: numb1
 * @b: numb2
 *
 * Return: the reslut of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * @a: numb1
 * @b: numb2
 *
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 * @a: numb1
 * @b: numb2
 *
 * Return: The remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
