#include"main.h"

/**
*more_numbers -Entry point
*
*Return: no return.
*/
void more_numbers(void)
{
int c;
int i;
for (i = 0; i < 10; i++)
{
for (c = 0; c < 15; c++)
{
if (c > 9)
_putchar((c % 10) + 48);
_putchar((c / 10) + 48);
}
_putchar('\n');
}
}
