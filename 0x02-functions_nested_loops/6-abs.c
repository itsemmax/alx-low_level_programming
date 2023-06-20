#include"main.h"
/**
  *  _abs - computes the absolute value of an integer
  *
  *@n: print from this number
  *
  *return :n if @n is greater than zero,
  *-n if @n is zero,
  */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
