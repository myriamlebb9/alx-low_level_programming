#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function executes the main logic of the program.
 * It prints all single digit numbers from 0 to 9 followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
putchar('\n');

return (0);
}

