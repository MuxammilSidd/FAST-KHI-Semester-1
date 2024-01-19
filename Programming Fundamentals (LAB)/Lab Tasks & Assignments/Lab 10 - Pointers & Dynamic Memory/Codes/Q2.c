// Q2.
// Find and output the final position of the robot based on the initial coordinates
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,ix,iy,s=0;
	printf("8 -> Up\t5 -> Down\t4 -> Left\t6 -> Right\n");
	printf("Enter how many steps to move: (<100)\n");
	scanf("%d",&n);
	printf("Enter starting coordinates:\t");
	scanf("%d%d",&ix,&iy);
	printf("\n\n");
	int a = n;
	int xpos= ix;
	int ypos= iy;
	int *com = (int *)malloc(n*sizeof(int));
	while(a>0)
	{
		printf("Enter movement: ");
		scanf("%d",&com[s]);	
		switch(com[s])
		{
			case 8:
				{
					ypos++;
					break;	
				}
			case 5:
				{
					ypos--;
					break;	
				}
			case 4:
				{
					xpos--;
					break;	
				}
			case 6:
				{
					xpos++;
					break;	
				}
		}
		s++;
		a--;
	}
	printf("\nMovements: {");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d,",com[i]);
	}
	printf("\b}");
	printf("\nFinal coordinates: (%d,%d)",xpos,ypos);
	free(com);
	return 0;
}


