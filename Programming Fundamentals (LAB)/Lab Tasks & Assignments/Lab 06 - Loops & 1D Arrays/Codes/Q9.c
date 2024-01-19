// Qno.9 Find the minimum and maximum number in an array.
#include<stdio.h>
int main()
{
	int m,n;
	printf("How many elements: ");
	scanf("%d", &n);
	int inp[n];
	for(m=0;m<=(n-1);m++)
	{
		printf("Enter element: ");
		scanf("%d", &inp[m]);
	}
	printf("\nYour inputted array is: \n\t{ ");
	for(m=0; m<=(n-1); m++)
	{
		if(m==(n-1))
		printf("%d ", inp[m]);
		else
		printf("%d, ", inp[m]);
	}
	printf("}");
	int max= inp[0], min= inp[0];

	for(m=0; m<=(n-1); m++)
	{
		if(inp[m]>max)
		{
			max=inp[m];
		}
		if(inp[m]<min)
		{
			min=inp[m];
		}
	}
	printf("\nMax: %d\nMin: %d",max,min);
	return 0;
}

