#include "main.h"
/**
* print_last_ digit - prints the last digit
* @n: prints the last digit
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 10)
ld *= -1;
_putchar(ld + '0');
return (0);
}
