#include<unistd.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase by iterating
 *              from 'a' to 'z' using the _putchar function to output each
 *              character. After printing the alphabet, it prints a newline
 *              character.
 *
 * Return: Nothing (void)
 */
void print_alphabet(void)
{
char a = 'a';

while (a <= 'z')
{
_putchar(a);

a++;
}

_putchar('\n');

}
