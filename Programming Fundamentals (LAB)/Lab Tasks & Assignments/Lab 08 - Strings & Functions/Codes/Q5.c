// Qno.5
#include<stdio.h>
int main()
{
	int car_num,day;
	printf("Enter Car Number and Day(1-7): ");
	scanf("%d%d",&car_num,&day);
	printf("\n");
	int dec=decideCarUsage(car_num,day);
	if(dec==1)
	printf("\tYou can use car today!");
	else
	printf("\tDON'T USE CAR TODAY!");
	return 0;
}
int decideCarUsage(int n,int d)
{
	if(n%2==0)
	{
		if(d%2==0)
		return 1;
		else
		return 0;
	}
	else
	{
		if(d%2==1)
		return 1;
		else
		return 0;
	}
}

