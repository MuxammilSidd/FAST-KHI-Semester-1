// Q1
// Write a C Program to Find Largest Number in an array Using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 5,i,m;
	int *pnt = (int*)calloc(n,sizeof(int));
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",pnt+i);
	}
	
	printf("Previous: \n");
		for(i=0;i<n;i++)
	{
		printf("%d ",*(pnt+i));
	}
	
	printf("\n\nEnter num of array to resize: ");
	scanf("%d",&m);

	pnt = (int*)realloc(pnt,m*sizeof(int));
	printf("Enter new array elements: \n");
	for(i=n;i<m;i++)
	{
		scanf("%d",pnt+i);
	}
	printf("\nUpdated: \n");
	for(i=0;i<m;i++)
	{
		printf("%d ",*(pnt+i));
	}
	
	int l = *(pnt);
	for(i=0;i<m;i++)
	{
		if(*(pnt+i)>l)
		l = *(pnt+i);
	}
	printf("\nLargest is %d",l);
	free(pnt);
	return 0;
}
