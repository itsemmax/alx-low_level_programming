#include<unistd.h>
#include"main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * Description: This function takes an integer as input and prints the sign of
 *              the number. If the number is greater than zero, it returns 1
 *              and prints a plus sign (+). If the number is zero, it returns 0
 *              and prints a zero digit (0). If the number is less than zero, it
 *              returns -1 and prints a minus sign (-).
 *
 * @n: The number to check the sign of
 *
 * Return: 1 if @n is greater than zero, 0 if @n is zero, -1 if @n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{

_putchar('+');
return (1);
}
else if (n < 0)
{

_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
