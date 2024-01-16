//Qno.4 (Recursions)
#include<stdio.h>
int main()
{
	int r,i;
	printf("Enter range: ");
	scanf("%d",&r);
    for (i = 0;i<r;i++) 
	{
        printf("%d, ", fib_series(i));
    }
    printf("\b\b ");
	return 0;
}
int fib_series(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
		
	else
	{
	int x=fib_series(n-1);
	int y=fib_series(n-2);
	int res=x+y;
	return res;
	}
}
