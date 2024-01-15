//C program to take a positive number as input and multiply it by 13 without using the * operator.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a +ve number: ");
	scanf("%d",&num);
	
	int x = (num<<3)+ (num<<2)+ num;     
	printf("Answer is: %d", x);
	return 0;
}


