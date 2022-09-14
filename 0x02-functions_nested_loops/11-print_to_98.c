#include"main.h"
#include<stdio.h>

/**
*print_to_98 -Entry point
*Description prints all natural numbers from n to 98
*Return: Nothing
*/
void print_to_98(int n)
{
int m;

if (n > 98)
{
for (m = n; n > 98; n--)
printf("%d, ", m);
else
for (m = n; n < 98; n++)
printf("%d, ", m);
printf("98\n");
}
