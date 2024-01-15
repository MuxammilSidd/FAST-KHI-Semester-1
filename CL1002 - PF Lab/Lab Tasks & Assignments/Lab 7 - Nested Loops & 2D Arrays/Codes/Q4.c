#include<stdio.h>
int main()
{
	int val,rem=0,i=0,sum=0;
	int element[i];
	printf("Enter number: ");
	scanf("%d",&val);
	while(val>9)
	{
		rem=val%10;
		val=(val-rem)/10;
		element[i]=rem;
		sum=sum+element[i];
		i++;
	}
	rem=val;
	sum=sum+rem;
	printf("Sum is: %d",sum);
}
