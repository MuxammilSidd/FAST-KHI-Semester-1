#include<stdio.h>
int main()
{
	int s,n,i,j,sum=0,flag=0;
	int index[2];
	printf("Enter S:");
	scanf("%d",&s);
	printf("Enter size of array:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		index[0]=i;
		sum=array[i];
		for(j=i+1;j<n;j++)
		{
			sum=sum+array[j];
			index[1]=j;
			if(sum>s)
			{
			break;
			}	
		if(sum==s)
		{
			flag=1;
			break;
		}
		}
		if(flag)
		break;
		
	}  
	if(flag)                                           
	printf("The Elements from Index %d to %d when summed results in the output of %d",index[0],index[1],s);
	else
	printf("No subarray found!");
}
