// Qno.2 Write a program that will generate the Fibonacci series up to 10000.
#include<stdio.h>
int main()
{
	int i,x=0,y=1,sum=0;
    int ans = 1;
    printf("Series: \n");
    for(i=1; i!=0 ; i++)
    {
        if (i == 2)
        {
            printf("%d ", y);
            continue;
        }
        
        printf("%d ", ans);
        if(ans%3==0 || ans%5==0 || ans%7==0)
        {
        	sum=sum+ans;
		}
        x = y;
        y = ans;
        ans = x + y;
        if(ans>10000)
			break;
    }
    	printf("\n\nSum of numbers divisible by 3,5 or 7 is = %d",sum);
    return 0;
}

