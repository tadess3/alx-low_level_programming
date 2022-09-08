#include<stdio.h>

/**
* main - entry point on line 12
* No args taken
*
* Des: program uses size() to output the size of data types
* Return: Always return 0 (Success)
*
*/

int main(void)
{
int intType;
float floatType;
long int liType;
char charType;
long long int lliType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(liType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(lliType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
