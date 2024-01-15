//Qno.1 (Pointers)
/*
A. Desired result, that is the values of j and k are not swapped. Why is this?
This is because the swapping of variable is performed wrongly, 'a' is assigned 'b' then 'b' is assigned 'a' which
is already equal to 'b' so variables are not swapped. Our function does not return any value so printf statement in 
line#13 prints the values that are assigned in main() without swapping.
To swap numbers we should use pointers and assign 'b' to 'temp' variable
*/
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int j=2,k=5;
	printf("j = %d\tk = %d",j,k);
	swap(&j,&k);
	printf("\nj = %d\tk = %d",j,k);
	return 0;
}
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
