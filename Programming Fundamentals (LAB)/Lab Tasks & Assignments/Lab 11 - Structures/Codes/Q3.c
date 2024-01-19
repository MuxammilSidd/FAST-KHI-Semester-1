//Qno3
#include<stdio.h>
#include<string.h>
struct date{
	int day;
	char month[10];
	int yr;
};

int main()
{
	struct date d1;
	struct date d2;
	
	printf("Date 1:\n");
	printf("Enter day: ");
	scanf("%d",&d1.day);
	printf("Enter month: ");
	scanf("%s",&d1.month);
	printf("Enter Year: ");
	scanf("%d",&d1.yr);
	
	printf("Date 2:\n");
	printf("Enter day: ");
	scanf("%d",&d2.day);
	printf("Enter month: ");
	scanf("%s",&d2.month);
	printf("Enter Year: ");
	scanf("%d",&d2.yr);
	
	
	if(d1.day==d2.day && strcmp(d1.month,d2.month)==0 && d1.yr==d2.yr )
	{
		printf("\nSame dates.");
	}
	
	else
	{
		printf("\nDates are not equal.");
	}
	return 0;
}