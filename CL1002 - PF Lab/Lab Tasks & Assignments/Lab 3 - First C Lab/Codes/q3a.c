/* QUESTION#3
a) Write a C program that takes two integer values as input from the user. Then swap the
values taken from the user and display the output of the variables. (Value of num1 should
be stored in num2 and vice versa). DO not use any other variable for swapping. */

#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	printf("\nBefore swapping\n \t Num1 = %d \t Num2 = %d", a, b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter swapping\n \t Num1 = %d \t Num2 = %d", a, b);
	return 0;
}

