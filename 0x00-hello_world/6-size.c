/**
 * main - Entry point
 * Description: Prints message to console.
 * Return: Always 0 (success)
 */

#include <stdio.h>
int main(void)
{
int SizeOfChar = 1;
printf("Size of a char: %d byte(s)", SizeOfChar);
int SizeofInt = 4;
printf("\nSize of an int: %d byte(s)", SizeofInt);
int SizeOflongInt = 4;
printf("\nSize of a long int: %d byte(s)", SizeOflongInt);
int SizeOfLongLongint = 8;
printf("\nSize of a long long int: %d byte(s)", SizeOfLongLongint);
int SizeOfFloat = 4;
printf("\nSize of a float: %d byte(s)", SizeOfFloat);
return (0);
}

