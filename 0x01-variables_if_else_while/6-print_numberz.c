#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num; /* Using char instead of int */

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');

return (0);
}

