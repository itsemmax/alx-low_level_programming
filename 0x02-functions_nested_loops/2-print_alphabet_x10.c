#include<unistd.h>
#include"main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description: This function prints the alphabet in lowercase 10 times. It
 *              achieves this by using nested loops. The outer loop iterates
 *              10 times to control the number of repetitions. The inner loop
 *              iterates from 'a' to 'z' and uses the _putchar function to
 *              output each character. After printing the alphabet for each
 *              repetition, it prints a newline character.
 *
 * Return: Nothing (void)
 */
void print_alphabet_x10(void)
{
char a;
int i;

for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);

}

_putchar('\n');

}
}
