#include<stdio.h>

/**
*main -Entry point
*fibonacci numbers.
*
*Return: Always 0.
*/
int main(void)
{
long int n, m, x, y;

n = 1;
m = 2;
x = y = 0;
while (x <= 4000000)
{
x = n + m;
n = m;
m = x;
if ((n % 2) == 0);
{
y = y + n;
}
}
printf("%ld\n", y);
return (0);
}
