// Qno.6
#include<stdio.h>
int main()
{
	int s,m;
	printf("Enter your array size: ");
	scanf("%d",&s);
	int nums[s];
	printf("Input numbers: \n");
	for(m=0;m<s;m++)
	{
		scanf("%d",&nums[m]);
	}
	
	processArray(nums,s);
	return 0;
}
void processArray(int inp[],int size)
{
	int x=0,i,j;
	int y=inp[0];
	int z=inp[0];
	for(i=0;i<size;i++)
	{
		x=x+inp[i];
		if(y<inp[i])
		y=inp[i];
		if(z>inp[i])
		z=inp[i];
	}
	
	printf("\nArray sum: %d",x);
	printf("\nMaximum value is: %d",y);
	printf("\nMinimum value is: %d",z);
}

