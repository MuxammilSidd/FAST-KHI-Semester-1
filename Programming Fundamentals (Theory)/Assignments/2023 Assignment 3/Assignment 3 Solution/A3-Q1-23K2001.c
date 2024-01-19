#include<stdio.h>

int matrix2by2(int inp[][2])
{
	int i,j,m;
	int ans=inp[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		if(inp[i][j]>ans)
		ans = inp[i][j];
	}
	return ans;
}

void *matrix4by4(int inp[][2][2],int ans[2][2])
{
	int check=inp[0][0][0];
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				if(inp[i][j][k]>check)
				{
					check=inp[i][j][k];
				}
				ans[j][k]=check;
			}	
		}
	}
}


void *matrix8by8(int inp[][4][4],int ans[4][4])
{
	int check=inp[0][0][0];
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				if(inp[i][j][k]>check)
				{
					check=inp[i][j][k];
				}
				ans[j][k]=check;
			}	
		}
	}
}

int main()
{
	printf("23K-2001\n");
	printf("Muzammil\n\n");
	
	char s_id[8];
	printf("Input student ID: ");
	gets(s_id);

	int numA[2][2];
	int i,j;
	for(i=4;i<8;i++)
	{
		numA[0][0] = s_id[i];
		numA[0][1] = s_id[++i];
		numA[1][0] = s_id[++i];
		numA[1][1] = s_id[++i];
	}

	printf("\nInputted array 2x2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c ",numA[i][j]);
		}
		printf("\n");
	}
	printf("\nMax of 2x2: [%c]\n\n",matrix2by2(numA));

	int numB[4][2][2];
	int b,k;
	for(i=4,k=0;i<8,k<4;i++,k++)
	{
		b=4;
		numB[k][0][0] = s_id[b];
		numB[k][0][1] = s_id[++b];
		numB[k][1][0] = s_id[++b];
		numB[k][1][1] = s_id[++b];
	}
	
	printf("\nInputed array 4x4:\n");
	for(k=0;k<4;k++)
	{
		for (i = 0; i < 2; i++) 
		{
            for (j = 0; j < 2; j++) 
			{
                printf("%c ", numB[k][i][j]);
            }
			// printf("\n");
        }
        printf("\n");
	}

	int ans4[2][2];
	matrix4by4(numB,ans4);
	printf("\nMax of 4x4:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c ", ans4[i][j]);
		}
		printf("\n");
	}

	int numC[4][4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			b=4;
			for(k=0;k<4;k++)
			{
				numC[i][j][k] = s_id[b++];
			}
		}
	}

	printf("\n\nInputted array 8x8:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<4;k++)
			{
				printf("%c ", numC[i][j][k]);
			} 
			printf("\t");
		}

		printf("\n");
		for(j=2;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				printf("%c ", numC[i][j][k]);
			}
			printf("\t");
		}

		if(i%2==1)
		printf("\n\n");
		else
		printf("\n");
	}

	int ans8[4][4];
	matrix8by8(numC,ans8);
	printf("Max of 8x8 array:\n");

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c ", ans8[i][j]);
		}
		printf("\n");
	}

	return 0;
}
