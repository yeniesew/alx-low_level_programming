#include <stdio.ih>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/*
 * main -entry point
 *
 * Return: always 0 (success)
 */
/**
 * main - print a random num
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code gose there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

