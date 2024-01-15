//i=rows,j=coloumn
#include<stdio.h>
int main()
{
	int matrix[5][5];
	int i,j,sum_c=0,sum_r=0;
	for(i=0;i<5;i++)
	{
	    printf("Enter row %d:",i+1);
		for(j=0;j<5;j++)
		{
		scanf("%d",&matrix[i][j]);
		}
	}
	printf("Row total: ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		sum_r=sum_r+matrix[i][j];
		}
		printf("\t%d",sum_r);
		sum_r=0;
	}
	printf("\nCOLUMN total: ");
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		sum_c=sum_c+matrix[j][i];
		}
		printf("\t%d",sum_c);
		sum_c=0;
	}
}
