//C program to take a number as input and print 1 if the number is a power of 10, and 0 if it is not.
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("%d",log10(num)==(int)log10(num));	// Checks if num is power of 10 or not
	return 0;
}

