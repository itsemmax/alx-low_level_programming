#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int temp;

	printf("%lu, %lu", bef, aft);

	for (i = 3; i <= 98; i++)
	{
		temp = bef + aft;
		printf(", %lu", temp);
		bef = aft;
		aft = temp;
	}

	printf("\n");
	return 0;
}

