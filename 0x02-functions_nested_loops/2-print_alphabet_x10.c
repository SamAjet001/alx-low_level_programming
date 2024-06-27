#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet
 * from 'a' to 'z' ten times, each time followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    char ch;
    int i;
    
    i = 0;
    while (i < 10)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
        i++;
    }
}
