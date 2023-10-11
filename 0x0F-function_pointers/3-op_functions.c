#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Entry point
 * @a: number1
 * @b: number2
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * @a: numb1
 * @b: numb2
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Entry point
 * @a: numb2
 * @b: numb2
 *
 * Return: The product of a and b.
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
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
