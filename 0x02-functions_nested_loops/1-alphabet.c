#include<unistd.h>
#include"main.h"
/*
 * main - entry point of the program
 *
 * description: This function is the entry point of the program. It prints
 *              the alphabet in lowercase using the print_alphabet function
 *              and then prints a newline character
 *
 * return: nothing
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
