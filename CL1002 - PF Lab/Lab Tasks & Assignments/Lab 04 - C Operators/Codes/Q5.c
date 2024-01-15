//C program to take a positive number as input and multiply it by 4 using only bitwise operators.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a +ve number: ");
	scanf("%d", &num);
	
	int ans = num<<2;
	printf("The answer is %d", ans);
	return 0;
}

