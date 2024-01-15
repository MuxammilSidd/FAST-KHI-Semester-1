#include<stdio.h>
int main()
{
	int r,c,i,j,flag=0;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of coloumn:");
	scanf("%d",&c);
	int matrix[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter elements for row %d: ",i);
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (matrix[i][j]==matrix[j][i])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
		if (flag==0)
		break;
	}
	if(flag==1)
	printf("Symmetrical");
	else
	printf("Non-Symmetrical");
}
