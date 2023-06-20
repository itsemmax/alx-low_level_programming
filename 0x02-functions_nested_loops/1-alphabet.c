#include<unistd.h>
#include"main.h"
/*
 * main - entry point of the program
 *
 * return: nothing
 */
void print_alphabet(void)
{
char a = 'a';

while(a<='z')
{
_putchar(a);

a++;
}

_putchar('\n');

}
