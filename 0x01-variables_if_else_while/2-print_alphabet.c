#include <stdio.h>
/**
 * main - returns alphabet
 * Return: always 0
 */
int main(void)
{
char ch = "a";
while (ch <= "z")
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
