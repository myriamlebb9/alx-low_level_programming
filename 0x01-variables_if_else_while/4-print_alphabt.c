#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char low, e, q;
e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
{
putchar(low);
}
}
putchar('\n');

return (0);
}

