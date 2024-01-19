// Qno.4 Write a C program to receive an 8-bit number into a variable and then check
#include<stdio.h>
int main()
{
	int m;
	printf("Enter any number: ");
	scanf("%d",&m);

	int p=3, q=6;
	int z = m &~(1<<p) &~(1<<q);		//Little problem here! Question requires when both 4th and 7th bits are on. Apply your logic accordingly.
	if(z==m)
	{
		printf("\nNo change in bits.");
		printf("\n\nOriginal number: %d\nRemains same: %d ", m, z);
	}
	else
	{
		printf("\nBit are changed now.");
		printf("\n\nOriginal number: %d\nAfter changing bits: %d ", m, z);
	}

	return 0;
}



