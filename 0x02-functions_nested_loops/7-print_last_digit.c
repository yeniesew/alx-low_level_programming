#include "main.h"

/**
 * print_last_digit - prints the last digit integer
 * @n: prints the last digit integer
 * Return: value of the last digit integer
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 10)
ld *= -1;
_putchar(ld + '0');
return (0);
}
