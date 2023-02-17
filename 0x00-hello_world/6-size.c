#include <stdio.h>
<<<<<<< HEAD
/**
 * main - A program that prints the size of the various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
=======

int main(void)
{
printf("The size of int is %zu bytes\n", sizeof(int));
printf("The size of char is %zu bytes\n", sizeof(char));
printf("The size of short is %zu bytes\n", sizeof(short));
printf("The size of long is %zu bytes\n", sizeof(long));
printf("The size of long long is %zu bytes\n", sizeof(long long));
printf("The size of float is %zu bytes\n", sizeof(float));
printf("The size of double is %zu bytes\n", sizeof(double));
printf("The size of long double is %zu bytes\n", sizeof(long double));

return (0);
}

>>>>>>> 45b517f481138a33828a0eff8afe679c34c76781
