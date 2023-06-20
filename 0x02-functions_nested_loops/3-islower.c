#include<unistd.h>
#include"main.h"
/**
 * _islower - Checks if a character is lowercase
 *
 * Description: This function checks whether a given character is lowercase
 *              or not. It takes a single character as input and compares it
 *              to the lowercase range of characters ('a' to 'z'). If the
 *              character is lowercase, it returns 1. Otherwise, it returns 0.
 *
 * @c: The character to be checked
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c < 'z' && c > 'a')
{

return (1);
}
else
{

return (0);
}
}
