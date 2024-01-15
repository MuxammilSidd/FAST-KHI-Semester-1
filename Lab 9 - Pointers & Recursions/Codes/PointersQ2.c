//Qno.2 (Pointers)
#include<stdio.h>
int reverse(int *arr,int size);
int main()
{
	int n=10,i;
	int arr[n];
	for(i=0; i<n; i++)
	{
		printf("Enter number#%d: \t",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Before using reverse function: \n\n");
	for(i=0; i<n; i++)
	{
		printf("Number#%d:\t%d\n",i+1, arr[i]);
	}
	
	reverse(&arr,n);
	printf("\nAfter using reverse function: \n\n");
	for(i=0; i<n; i++)
	{
		printf("Number#%d:\t%d\n",i+1, arr[i]);
	}
	return 0;
}

int reverse(int *arr,int size)
{
	int x,y,z;
	for(x=size-1,y=0; x>y && y<size; x--, y++)
	{
		z = arr[y];
        arr[y] = arr[x];
        arr[x] = z;
	}
	return *arr;
}
