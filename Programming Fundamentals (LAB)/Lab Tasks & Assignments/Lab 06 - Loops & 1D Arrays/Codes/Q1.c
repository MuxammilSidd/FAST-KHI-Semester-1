// Qno.1 Identify if the number is a perfect number
#include<stdio.h>
int main()
{
	int m,x=0,h;
	printf("Enter a number: ");
	scanf("%d",&m);
	
	for(h=1; h<m; h++)
	{
		if(m%h==0)
		{
			x=x+h;
		}
	}
	if(m==x)
	{
		printf("\nNumber is a perfect num.");
	}
	else
	{
		printf("\nNumber is not a perfect num.");
	}
return 0;
}

