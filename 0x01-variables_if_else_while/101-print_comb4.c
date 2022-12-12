#include<stdio.h>
/**
 * main - entry points
 * Return: 0
 */
int main(void)
{
int a = '0';
int b = '0';
int c = '0';
for (a = '0'; a <= '7'; a++)
{
for (b = '0'; b <= '8'; b++)
{
for (c = '0'; c <= '9'; c++)
{
if (!((c == b) || (b > c) || (a > b)))
{
putchar(a);
putchar(b);
putchar(c);
if (!(c == '9' && b == '8' && a == '7'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}


