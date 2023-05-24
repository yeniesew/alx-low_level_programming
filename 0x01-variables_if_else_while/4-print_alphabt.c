#include<stdio.h>
/**
 * main -  Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if ((c != 'e' && c != 'q') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
