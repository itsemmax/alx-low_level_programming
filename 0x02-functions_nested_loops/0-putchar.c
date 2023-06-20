#include<unistd.h>
#include"main.h"
/**
 * main - Entry point of the program
 *
 * Description: This function is the entry point of the program. It prints
 *              the characters of the string "_putchar" using the _putchar
 *              function and then prints a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str = "_putchar";  /* String to be printed */
    int i = 0;              /* Loop counter */

    while (str[i])
    {
        _putchar(str[i]);   /* Print each character of the string */
        i++;
    }

    _putchar('\n');         /* Print a newline character */

    return (0);
}

