#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int i = '0';
int j = '0';
for (i = '0'; i <= '8'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (!((j == i) || (i > j)))
{
putchar(i);
putchar(j);
if (!(j == '9' && i == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
