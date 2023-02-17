#include <stdio.h>
/**
 * main - A program that print the size of various types on the compiler
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of char: %zu bytes(s)\n", sizeof(a));
printf("size of int: %zu bytes(s)\n", sizeof(b));
printf("size of long int: %zu bytes(s)\n", sizeof(c));
printf("size of long long int: %zu bytes(s)\n", sizeof(d));
printf("size of float: %zu bytes(s)\n" sizeof(f));
return (0);
}
