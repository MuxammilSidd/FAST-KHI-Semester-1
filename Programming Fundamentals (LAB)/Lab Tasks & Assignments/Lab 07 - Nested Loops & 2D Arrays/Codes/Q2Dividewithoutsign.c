#include<stdio.h>
int main()
{
	int divided_by,to_be_divided,i=0,left_over;
	printf("Enter number to be divided:");
	scanf("%d",&to_be_divided);
	printf("Enter divider:");
	scanf("%d",&divided_by);
	if (divided_by!=0)
	{
		while (to_be_divided>=divided_by)
		{
			to_be_divided=to_be_divided-divided_by;
			i=i+1;
		}
		left_over=to_be_divided;
		printf("ANSWER IS: %d WITH REMAINDER: %d",i,left_over);
	}
		else
		printf("Infinity");
}