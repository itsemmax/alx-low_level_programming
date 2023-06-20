#include<unistd.h>
#include"main.h"
/**
 * print_last_digit - prints the last digit
 * of a number and return n%10
 *
 *@n: the number to work with
 *
 *Return: the value of the last digist
 */
int print_last_digit(int n)
{
	int sign;

	sign = 1;

	if (n < 0)
	{
		sign = -1;
	}
		_putchar(((n % 10) * sign) + '0');
		return ((n % 10) * sign);
}
