// Qno.2 Write a C program to create Calculator using Switch
#include<stdio.h>
int main()
{
	int nA, nB, f;
	char a;
	printf("*****Welcome to Muzammil Calculator*****");
	printf("\n\tEnter + for addition");
	printf("\n\tEnter - for subtraction");
	printf("\n\tEnter * for multiplication");
	printf("\n\tEnter / for division\n");
	scanf("%c", &a);
	
	printf("\n\nEnter numberA and numberB: ");
	scanf("%d %d", &nA, &nB);
	
	switch(a)
	{
		case '+':
			{
				f= nA + nB;
				printf("\n\tSum of %d and %d is %d", nA, nB, f);
				break;
			}
		case '-':
			{
				f = nA - nB;
				printf("\n\tDifference of %d and %d is %d", nA, nB, f);
				break;
			}
		case '*':
			{
				f = nA * nB;
				printf("\n\Product of %d and %d is %d", nA, nB, f);
				break;
			}
		case '/':
			{
				f = nA / nB;
				printf("\n\tDivision of %d and %d is %d", nA, nB, f);
				break;
			}
	}	
	return 0;
}

