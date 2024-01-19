//Qno.1 
#include<stdio.h>
void swap_2num();
int main()
{
	int a,b;
	printf("Enter numA: ");
	scanf("%d",&a);
	printf("Enter numB: ");
	scanf("%d",&b);
	
	printf("Before swapping: \n\tA = %d\tB = %d",a,b);
	swap_2num(a,b);
	return 0;
}
void swap_2num(int x, int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping: \n\tA = %d\tB = %d",x,y);
}

