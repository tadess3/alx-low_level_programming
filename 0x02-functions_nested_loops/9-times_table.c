#include"main.h"

/**
*times_table -Entry point
*
*Return: no return
*/
void times_table(void)
{
int x, y, z;
for (x; x <= 9; x++)
{
_putchar(48);
for (y; y <= 9; y++)
{
z = x * y;
_putchar(44);
_putchar(32);
if (z <= 9)
{
_putchar(32);
_putchar(z + 48);
}
else
{
_putchar((z / 10) + 48);
_putchar((z % 10) + 48);
}
}
_putchar('\n');
}
}
