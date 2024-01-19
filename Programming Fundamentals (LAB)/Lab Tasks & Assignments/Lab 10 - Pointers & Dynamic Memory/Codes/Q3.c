// Q3.
// code the basics of the Battleship game logic.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **field=(char **)calloc(6,sizeof(char*));
	int i,j;
	for(i=0;i<6;i++)
	{
		*(field+i) = (char*)calloc(6,sizeof(char));
	}
	
	printf("Entering field:\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf(" %c",(*(field+i)+j));
		}
	}
	system("cls");
	printf("6x6 Field\n");
	int t = 10;
	int x,y,a,ship=0,r=0;
	while(t>0)
	{
		printf("\nEnter coordinates to attack: ");
		scanf("%d%d",&x,&y);
		
		if(field[x][y]=='S')
		{
			ship++;
			printf("Hit successful\n");
			*(*(field+x)+y)='E';
		}
		else
		{
			printf("Missile wasted!\n");
			t--;
			if(t==0)
			{
				for(i=0;i<6;i++)
				{
					for(j=0;j<6;j++)
					{
						if(field[i][j]!='E')
						{
						r++;
						}
						
					}
				}
				break;
			}
				
		}
		
		
		 a=0;
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
			{
				if(field[i][j]!='E')
				{
					a=1;
				}
				
			}
		}
		if(a==0)
		goto win;
	}
	
	printf("\n-------------------------------------------------------------------------------------------------------------------------");
	if(t>0)
	{
		win:
		printf("\n\nAll ships destroyed.\nYou have won.\nHit: %d\tMiss: %d\n\nShips remaining: %d\tTries remaining: %d",ship,10-t,r,t);
	}
	else
	printf("\n\nBot won.(No tries left!)\nHit: %d\tMiss: %d\n\nShips remaining: %d\tTries remaining: %d",ship,10-t,r,t);
	
	
	for(i=0;i<6;i++)
	{
		free(*(field+i));
	}
	free(field);
	return 0;
}
