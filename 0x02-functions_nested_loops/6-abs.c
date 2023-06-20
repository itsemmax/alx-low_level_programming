#include"main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * Description: This function takes an integer as input
 *              and returns its absolute value.
 *              If the number is negative
 *              it return the negation of the number
 *		If the number is zero or positive,
 *		it returns the number as is.
 *
 * @n: The number to compute the absolute value of
 *
 * Return: The absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
