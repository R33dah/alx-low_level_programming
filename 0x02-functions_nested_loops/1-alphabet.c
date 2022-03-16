#include "main.h"
/**
 * print_alphabet - function to print alphabet in lowercase.
 
 *Description: 	Uses the holberton folder header file, that brings in the  _putchar
 * function.
 * Return: Void.
 */

void print_alphabet(void)
{
char ch;

ch = 'a';
	
while (ch <= 'z')
{
_putchar(ch);
++ch;
}
_putchar('\n');
}
