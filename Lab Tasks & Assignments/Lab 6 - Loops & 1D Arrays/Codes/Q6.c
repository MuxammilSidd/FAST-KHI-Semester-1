// Qno.6 Write a program for a match-stick game
#include<stdio.h>
int main()
{
	unsigned int s=21, r=s,x;
	int in;
	for(; ;)
	{
			if(r==1)
				{
					printf("\n\t\aHAH YOU LOSE!");
					break;
				}
		printf("\nHow many sticks u pickin'? (1,2,3, or 4): ");
		scanf("%d", &in);
			if(in>4)
				{
					printf("\n\tPlz enter correct input!");
					break;
				}
		x=5-in;
		printf("\nComputer picked %d sticks..\n", x);
		r=r-x-in;
		printf("\nRemains: %d sticks",r);	
	}
	return 0;	
}

