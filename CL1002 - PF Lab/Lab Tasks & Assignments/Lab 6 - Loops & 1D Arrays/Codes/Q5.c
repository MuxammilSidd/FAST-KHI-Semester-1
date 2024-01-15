// Qno.5 Pattern
#include<stdio.h>
int main()
{
	int m;
	for(m=0; m<=6; m++)
	{
		if(m%2==0)
		{
			printf("%d	",m);
			printf("%d	",m);
			printf("%d	",m);
			printf("%d	\n",m);
		}
		else
		{
			printf("	%d	",m);
			printf("%d\n",m);
		}
	}
	return 0;
}

